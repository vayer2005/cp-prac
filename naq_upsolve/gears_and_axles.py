import math

n = int(input())

dic = {}
for i in range(n):
    s, c = [int(x) for x in input().split()]

    if s in dic:
        dic[s].append(c)
    else:
        dic[s] = [c]

total = 0
for key, val in dic.items():
    ran = sorted(val)
    l,r = 0, len(ran)-1

    while (l < r):
        total += math.log(ran[r]/ran[l])
        l+=1
        r-=1

print(total)
