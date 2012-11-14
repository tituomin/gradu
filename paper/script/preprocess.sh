#!/bin/bash

sed -e 's/ *@@\([a-z0-9]\+\)(\([^)]\+\))/ \\cite[s.~\2]{\1}/g' $1 \
| sed -e 's/ *@@\([a-z0-9]\+\)/ \\cite{\1}/g' >$2