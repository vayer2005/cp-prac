n, m = [int(x) for x in input().split()]

dp = {}

expected = []
actual = []
for i in range(n):
    expected.append(int(input()))

for i in range(m):
    actual.append(int(input()))

def trav(ni, mi):
    pres = 0
    if ni >= len(expected) or mi >= len(actual):
        return 0
    if abs(expected[ni] - actual[mi])<=15:
        pres += 7
    elif abs(expected[ni] - actual[mi])<=23:
        pres += 6
    elif abs(expected[ni] - actual[mi])<=43:
        pres += 4
    elif abs(expected[ni] - actual[mi])<=102:
        pres += 2
   
    if (ni, mi) not in dp:
        dp[(ni, mi)] = max(pres + trav(ni+1, mi+1), trav(ni, mi+1), trav(ni+1, mi))
    return dp[(ni,mi)]

trav(0,0)
print(dp[(0,0)])
