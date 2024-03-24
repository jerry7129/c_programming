#!/bin/bash

set -x
gcc -g -Og sum.c plus.c main.c -o main
