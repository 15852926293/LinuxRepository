#!/bin/bash
#-----------  echo -n
echo -n "yes or no(y/n)?"
read choice
echo "your choice; $choice"
#------ read -p -t
echo -------------------------
if read -t 5 -p "Please enter your name: " name
then 
    echo -e "\nHello $name !"
else
    echo -e "\n\nsorry time out !"
fi

