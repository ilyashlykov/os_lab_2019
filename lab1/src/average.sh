#!/bin/bash
count=0
sum=0
while [ -n "$1" ]
do
  ((sum = sum + $1))
  ((count++))
  shift
done 
((avg=sum/count))
echo 'avg= '$avg'
count= '$count'
'