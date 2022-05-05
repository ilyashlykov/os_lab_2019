#!/bin/bash
count=1
while [ $count -le 150 ]
do
  echo $RANDOM>number.txt
  ((count++))
done