import heapq
t = int(input())

for x in range(t):
    n, m, l = [int(h) for h in input().split()]

    trav = []
    
    for i in range(n):
        hurd = [int(y) for y in input().split()]
        trav.append(hurd + [1])

    for i in range(m):
        power = [int(y) for y in input().split()]
        trav.append(power + [0])

    powers = []
    trav = sorted(trav, key = lambda x : x[0])
    
    heapq.heapify(powers)
    res = 0
    tPow = 1
    ret = True
    for a, b, c in trav:
        if c == 0:
            heapq.heappush(powers, -1 * b)
        else:
            pNeeded = b - a + 2
            while (powers and (pNeeded > tPow)):
                tPow -= heapq.heappop(powers)
                res += 1
            
            if (pNeeded > tPow):
                print(-1)
                ret = False
                break
    
    if ret:
        print(res)


