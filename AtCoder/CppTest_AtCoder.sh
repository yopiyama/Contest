#!/bin/bash

problemname=$1
oj dl "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}"
g++ -Wall -std=c++14 ./$1.cpp
oj test
rm -f a.out
rm -rf test
