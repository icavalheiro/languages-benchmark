import random
import sys

n = int(sys.argv[1])
array = []

for x in range(n):
    array.append(random.randint(1, n))

array.sort()