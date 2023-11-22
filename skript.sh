#!/bin/bash

git clone https://github.com/Crews82/cviceni4
cd cviceni4
gcc program.c -o program
./program > data.csv
python3 tree.py
