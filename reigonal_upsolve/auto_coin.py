n, m = [int(x) for x in input().split()]
denom = [int(x) for x in input().split()]
denom = set(denom)


dp = [float('inf') for i in range(100001)]
dp[0] = 0

queries = []
for _ in range(m):
    c, val = input().split()
    val = int(val)

    if c == "X":
        denom.remove(val)
    
    queries.append([c, val])

for i in range(100001):
    for coin in denom:
        if i-coin >= 0 and dp[i-coin] != float('inf'):
                dp[i] = min(dp[i], 1 + dp[i - coin])


queries.reverse()

sol = []
for query in queries:
    c, val = query
    if c == "X":
        for i in range(100001):
            if i-val >= 0 and dp[i-val] != float('inf'):
                dp[i] = min(dp[i], 1 + dp[i -val])
    else:
        if dp[val] == float('inf'):
            sol.append(-1)
        else:
            sol.append(dp[val])
        

for i in range(len(sol)-1, -1, -1):
    print(sol[i])
