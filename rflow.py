import math
from collections import defaultdict

n = int(input())
gears = defaultdict(list)

for i in range(n):
    size, count = map(int, input().split())
    gears[size].append(count)

maxspeed = 0

for size, counts in gears.items():
    counts.sort()
    l,r = 0, len(counts) - 1

    while l < r:
        maxspeed += math.log((1.0 * counts[r])/counts[l])
        l+=1
        r-=1
    


print(maxspeed)
