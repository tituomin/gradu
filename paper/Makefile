
TEXINPUTS := ./gen/:./templates/:
BIBINPUTS := ../bib:

CHAPTERS := $(wildcard src/chapters/*.org)

vpath %.org src
#vpath %.org ./src/chapters
vpath %.tex gen

# You want latexmk to *always* run, because make does not have all the info.
.PHONY: main.pdf
.PHONY: print

# First rule should always be the default "all" rule, so both "make all" and
# "make" will invoke it.
all: main.pdf

# CUSTOM BUILD RULES

# In case you didn't know, '$@' is a variable holding the name of the target,
# and '$<' is a variable holding the (first) dependency of a rule.

main.tex: main.org $(CHAPTERS)
	emacs --batch --script script/org2latex.el

# MAIN LATEXMK RULE

# -pdf tells latexmk to generate PDF directly (instead of DVI).
# -pdflatex="" tells latexmk to call a specific backend with specific options.
# -use-make tells latexmk to call make for generating missing files.

# -interactive=nonstopmode keeps the pdflatex backend from stopping at a
# missing file reference and interactively asking you for an alternative.

main.pdf: main.tex
	TEXINPUTS=./gen/:./templates/: BIBINPUTS=../bib/: latexmk -pdf -pdflatex="pdflatex -interactive=nonstopmode" -use-make gen/main.tex

clean:
	latexmk -CA
