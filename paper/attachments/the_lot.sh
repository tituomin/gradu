#!/bin/bash

function individual_file() {
    filename=$1
    language=$2
    echo "\subsection{${filename#$BASEDIR}}"
    echo "\inputminted[linenos, numbersep=5pt, tabsize=4, frame=bottomline]{$language}{$filename}"
}

function print_all() {
    BASEDIR=$1
    LANGUAGE=$2
    ROOT=$3
    echo "\section{$LANGUAGE-tiedostot hakemistossa ${BASEDIR#$ROOT}}"
    for filename in `find $BASEDIR -iname "*.$FILE_SUFFIX"`
    do 
        individual_file $filename $FILE_SUFFIX
    done
}

cat source-code.tex

BASEDIR='/home/tituomin/StudioProjects/nativebenchmark/src/fi/helsinki/cs/tituomin/nativebenchmark/'
FILE_SUFFIX='java'

print_all $BASEDIR $FILE_SUFFIX "/home/tituomin/StudioProjects/nativebenchmark/"

echo "\end{document}"
