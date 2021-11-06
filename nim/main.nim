import os
import std/algorithm
import std/random
from std/strutils import parseInt

let 
    n = parseInt(paramStr(1))

var 
    sequence = newSeq[int](n)

for i in 0..n :
    sequence.add(rand(n))

sequence.sort()



