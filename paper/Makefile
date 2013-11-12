
CHAPTERS := $(wildcard src/chapters/*.org)
BUILD_DIRS := gen gen/chapters build

vpath %.org  src
vpath %.tex  gen

# You want latexmk to *always* run, because make does not have all the info.
.PHONY: main.pdf
.PHONY: print

# First rule should always be the default "all" rule, so both "make all" and
# "make" will invoke it.
all: $(BUILD_DIRS) main.pdf 

gen:
	mkdir -p gen
gen/chapters: gen
	mkdir -p gen/chapters
build:
	mkdir -p build

# CUSTOM BUILD RULES

# In case you didn't know, '$@' is a variable holding the name of the target,
# and '$<' is a variable holding the (first) dependency of a rule.

gen/chapters_generated: $(CHAPTERS)
	for file in $(?F); do script/preprocess.sh src/chapters/$$file gen/chapters/$$file; done
	touch gen/chapters_generated

main.tex: main.org gen/chapters_generated
	emacs --batch --script script/org2latex.el

# MAIN LATEXMK RULE

# -pdf tells latexmk to generate PDF directly (instead of DVI).
# -pdflatex="" tells latexmk to call a specific backend with specific options.
# -use-make tells latexmk to call make for generating missing files.

# -interactive=nonstopmode keeps the pdflatex backend from stopping at a
# missing file reference and interactively asking you for an alternative.

main.pdf: main.tex
	TEXINPUTS=./gen/:./templates/: BIBINPUTS=../bib/:./templates/: latexmk -jobname=build/tituomin-gradu -pdf -pdflatex="pdflatex -interaction nonstopmode" -use-make gen/main.tex
	chmod a+r build/tituomin-gradu.pdf
	cp build/tituomin-gradu.pdf ~/public_html/

clean:
	latexmk -CA
