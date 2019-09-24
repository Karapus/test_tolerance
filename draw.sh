#!/bin/bash
./a.out $1 > .data.txt

gnuplot << EOP

set terminal jpeg size 1920,1080
set output "$2"

plot ".data.txt" 

EOP

eog $2
