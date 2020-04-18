#!/bin/bash
mkdir -p find_here/dir1 find_here/dir2 find_here/dir2/dir2_1

touch find_here/xoo{1..2}boo.txt
touch find_here/foo{3..6}.txt
touch find_here/booxoo{1,2}.txt
touch find_here/dir1/foo{1..3}.txt 
touch find_here/dir1/xoo{2..3}.txt 
touch find_here/dir1/boo{3..5}foo.txt
touch find_here/dir1/{goo,3}{boo,2}foo.txt

touch find_here/dir2/foo{1..5}.txt 
touch find_here/dir2/xoo{1..4}.txt 
touch find_here/dir2/goo{1..5}moo.txt 
touch find_here/dir2/dir2_1/moo{1..3}.txt 
touch find_here/dir2/dir2_1/boo{2..5}.txt 
touch find_here/dir2/dir2_1/xooboo{2..5}.txt 

touch find_here/point{1..3}.txt
touch find_here/dir1/boint{1..2}.txt
touch find_here/dir2/dir2_1/bointpoint{1..2}.txt