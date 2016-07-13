#!/bin/bash

function individual_file() {
    filename=$1
    language=$2
    BASEDIR=$3
    echo "\vspace{1cm}"
    HEADER=${filename#$BASEDIR}
    HEADER=${HEADER//_/\\_}
    echo "\subsubsection{$HEADER}"
    echo "\inputminted[fontsize=\small, linenos, numbersep=5pt, tabsize=4, frame=topline,framesep=0.8cm]{$language}{$filename}"
}

function print_all() {
    ROOT=$1
    BASEDIR=$2
    LANGUAGE_SUFFIX=$3
    LANGUAGE=$4
    SUBPROJECT=$5
    echo "\subsection{$SUBPROJECT}"
    echo "Hakemistossa ${BASEDIR#$ROOT}."
    for filename in `find $BASEDIR -iname "*.$LANGUAGE_SUFFIX" |sort`
    do 
        individual_file $filename $LANGUAGE $BASEDIR
    done
}

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cat "$DIR/source-code.tex"

BASEROOT='/home/tituomin/StudioProjects'

echo "\newpage"
echo "\section{NativeBenchmark}"

print_all "$BASEROOT/nativebenchmark/" \
          "$BASEROOT/nativebenchmark/src/fi/helsinki/cs/tituomin/nativebenchmark/" \
          "java" \
          "java" \
          "Java-komponentit"

echo "\newpage"

print_all "$BASEROOT/nativebenchmark/" \
          "$BASEROOT/nativebenchmark/script/" \
          "py" \
          "python" \
          "Python-komponentit"

echo "\end{document}"
