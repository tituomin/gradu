
CHAPTERS := $(wildcard src/chapters/*.org)
BUILD_DIRS := gen gen/chapters build

FIGURE_SOURCES := $(shell find figures/plots/ -name '*.tex' -and -not -name '*latin.tex')
FIGURE_BASENAMES := $(basename $(FIGURE_SOURCES))
FIGURE_LATIN_BASENAMES := $(addsuffix -latin,$(FIGURE_BASENAMES))
FIGURE_LATIN := $(addsuffix .tex,$(FIGURE_LATIN_BASENAMES) )


vpath %.org  src
vpath %.tex  gen

# You want latexmk to *always* run, because make does not have all the info.
.PHONY: main.pdf
.PHONY: print

# First rule should always be the default "all" rule, so both "make all" and
# "make" will invoke it.
all: $(BUILD_DIRS) main.pdf

plots: $(BUILD_DIRS) plots.pdf

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

gen/main.tex: src/main.org gen/chapters_generated
	emacs --batch --script script/org2latex.el $(abspath $<) $(abspath $@)

gen/plots.tex: src/plots.org
	emacs --batch --script script/org2latex.el $(abspath $<) $(abspath $@)

# MAIN LATEXMK RULE

# -pdf tells latexmk to generate PDF directly (instead of DVI).
# -pdflatex="" tells latexmk to call a specific backend with specific options.
# -use-make tells latexmk to call make for generating missing files.

# -interactive=nonstopmode keeps the pdflatex backend from stopping at a
# missing file reference and interactively asking you for an alternative.

figures/plots/plot-%-latin.tex: figures/plots/plot-%.tex
	iconv -f UTF-8 -t ISO-8859-1 $< -o $@



gen/main-latin.tex: gen/main.tex
	iconv -f UTF-8 -t ISO-8859-1 gen/main.tex -o gen/main-latin.tex

gen/plots-latin.tex: plots.tex
	iconv -f UTF-8 -t ISO-8859-1 gen/plots.tex -o gen/plots-latin.tex

$(FIGURE_LATIN): $(FIGURE_SOURCES)

main.pdf: gen/main-latin.tex $(FIGURE_LATIN)
	TEXINPUTS=./gen/:./templates/: BIBINPUTS=../bib/:./templates/: latexmk -jobname=build/tituomin-gradu -pdf -pdflatex="pdflatex -interaction nonstopmode -shell-escape" -use-make gen/main-latin.tex

plots.pdf: gen/plots-latin.tex $(FIGURE_LATIN)
	TEXINPUTS=./gen/:./templates/: BIBINPUTS=../bib/:./templates/: latexmk -jobname=build/plots -pdf -pdflatex="pdflatex -interaction nonstopmode -shell-escape" -use-make gen/plots-latin.tex



clean:
	latexmk -CA
