#!/usr/bin/python
from sys import argv
import re
import pprint

depths=set()

SEPS_ONLY=re.compile('^[ |]+$')
COMMENT=re.compile('^#')
FIRST_LINE=re.compile('^[ ]+[0-9]+\.[0-9]+%[ ]+[0-9]+\.[0-9]+%')

def extract(line):
    record = {}
    try:
        first_line = False
        if FIRST_LINE.match(line):
            first_line = True
            first_index = line.index('%')
            line = line[first_index+1:]
        depth = line.index('%')
        original_depth = depth
        percentage_start = line[depth-5]
        if first_line:
            record['texts'] = [line[depth+3:].strip()]
        else:
            record['texts'] = [line[depth+4:].strip()]
        if percentage_start == '-':
            depth += 1
        percentage = line[depth-5:original_depth]
        record['percentage'] = percentage
        record['depth'] = depth
        depths.add(depth)
    except ValueError as e:
        if not SEPS_ONLY.match(line):
            record['continuation'] = True
        else:
            record['skip'] = True
        record['texts'] = [re.sub('[ |]+', '', line).strip()]
    return record

def process(filename):
    with open(filename, 'r') as f:
        lines = [
            extract(line) for line in f if (not SEPS_ONLY.match(line) and not COMMENT.match(line))]
    sorted_depths = sorted(depths)
    print '''
\\begin{figure}
\\centering
\\begin{topbot}
\\begin{minipage}{1.0\\textwidth}
\\scriptsize
\\dirtree{%'''

    depth = -1
    def combine(rec1, rec2):
        rec1['texts'].extend(rec2['texts'])
        return rec1
    def r(x, y):
        if y.get('continuation'):
            return x[:-1] + [combine(x[-1], y)]
        else:
            return x + [y]
    new_lines = reduce(r, lines, [])
    #new_lines = [{'texts':['']}] + reduce(r, lines, [])

    for line in new_lines:
        if not line.get('continuation'):
            depth = line.get('depth', None)
        if not depth and not line.get('continuation'):
            index = 1
        else:
            index = sorted_depths.index(depth) + 1
        formatted_texts = []
        percentage = line.get('percentage')
        if percentage and len(percentage) > 0:
            percentage += '\%'
        for i, text in enumerate(line['texts']):
            formatted_percentage = ''
            if i == 0:
                if percentage:
                    formatted_percentage = "\\textbf{{{}}}".format(percentage)
                formatted_text = '.{} '.format(index)
            else:
                if percentage:
                    formatted_percentage = "\\phantom{{\\textbf{{{}}}}}".format(percentage)
                formatted_text = ''
            formatted_text += "{} {}".format(formatted_percentage, text.replace('_', '\_'))
            if i + 1 == len(line['texts']):
                formatted_text += '. '
            formatted_texts.append(formatted_text)
        print('\\newline '.join(formatted_texts))

    print """}
\end{minipage}
\end{topbot}
\caption{Framing a dirtree-generated figure}
\end{figure}
"""

if __name__ == '__main__':
    filename = argv[1]
    process(filename)
