#!/bin/zsh

gcc src/$1
if [ $? == 0 ]
then
  ./a.out
  rm a.out
else
  echo "Compilation Error."
fi