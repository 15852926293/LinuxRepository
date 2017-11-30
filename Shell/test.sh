#!/bin/bash
#---echo the current PATH.
echo $PATH
#---echo the linux command result.
dir=$(pwd)
echo $dir
#---save the original IFS value
IFS_old=$IFS
#---set IFS = '\n'
IFS=$'\n'
files=`ls -la`
for file in $files;do
    echo $file
done
#---recover the IFS value
IFS=$IFS_old
#------------------------------------
echo ------------------------------------
#--- + - * / %
expr 10 + 3
expr 10 - 3
expr 10 \* 3
expr 10 / 3
expr 10 % 3
num1=$(expr 10 + 3)
num2=`expr 10 - 3`
echo $num1  $num2
#--- [$num1 + $num2]
echo -----
num1=10
num2=3
echo $[$num1+$num2]
echo $[$num1-$num2]
echo $[$num1*$num2]
echo $[$num1/$num2]
echo $[$num1%$num2]
a=$[$num1 + $num2]
b=$[$num1 - $num2]
echo $a  $b
#------------------------------------
echo ------------------------------------
num=$(echo "scale=2; 10 / 3" | bc)
echo $num
#------------------------------------
echo -------------------if----------------
if pwd
then
    echo pwd do then command!
fi
#-----
echo -----
if more
then
    echo move do then command!
elif pwd
then
    echo do elif then commamd!
fi
#-----
echo -----
num1=100
num2=200
if (( $num1 < $num2 ))
then
    echo "num1 < num2"
elif (( $num2 == $num2 ))
then 
    echo "num1 = num2"
else
    echo "num1 > num2"
fi
#-----
echo -----
str1=ABC
str2=ABD
if [[ $str1 = $str2 ]]
then
    echo "str1 = str2"
elif [[ $str1 < $str2 ]]
then 
    echo "str1 < str2"
else
    echo "str1 > str2"
fi
#------------------------------------
echo -------------------case----------------
echo please enter a number...
read num
case $num in
    1) echo "enter 1";;
    2) echo "enter 2";;
    3) echo "enter 3";;
    4) echo "enter 4";;
    5) echo "enter 5";;
    *) echo "enter bigger than 5";;
esac
#------------------------------------
echo ---------------for---------------------
for (( i = 0; i < 10; i++))
do
    echo "i = $i"
done
#------------------------------------
echo ---------------while---------------------
#while test command
#do
#    command
#done
#-----
num=1
while (( $num < 10 ))
do
    echo $num
    num=$[ $num + 1 ]
done
#------------------------------------
echo ---------------until---------------------
num=1
until (( $num > 10 ))
do
    echo $num
    num=$[ $num + 1 ]
done
#-------------break 2 / continue 2---
#------------------------------------
