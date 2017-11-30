#!/bin/bash
#-------- $0 ~ $9 , ${10}~... -------
echo "file name: $0"
echo "base file name: $(basename $0)"
echo "param1: $1"
echo "param2: ${2}"
#-------- $# ------------------------
echo --------------------------------
for (( index=0; index <= $#; index++ ))
do
    echo ${!index}
done
#-------- $* / $@ -------------------
echo --------------------------------
var1=$*
var2=$@
echo "var1: $var1"
echo "var2: $var2"
echo ------------------
for param1 in "$*"
do
    echo "var1: $param1"
done
echo -----
for param2 in "$@"
do
    echo "var2: $param2"
done
