t = int(input())

for i in range(t):
    n = int(input())

    arr = [int(x) for x in input().split()]

    dic = {}
    for a in arr:
        if a in dic:
            dic[a] += 1
        else:
            dic[a] = 1
    
    ans = 0

    for key,val in dic.items():
        ans += val//2
    

    print(ans)