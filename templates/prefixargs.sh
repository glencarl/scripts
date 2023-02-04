#!/usr/bin/env bash

echo "prefix args.py to input file: $1"
y=`cat args.py`
x=`echo "$y"; cat $1`
echo "$x" > $1
echo "file $1 args header added"
