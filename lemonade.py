t = int(input())

for i in range(t):

    s = input().split(" ")
    n,k = int(s[0]), int(s[1])
    temp = input().split()
    vals = []
    for i in range(n):
        vals.append(int(temp[i]))

    vals.sort()
    prev = 0
    sum = 0
    for i in range(len(vals)):
        if ((vals[i] - prev) * (n - i) + sum >= k):
            print(k+i)
            break
        else:
            sum += (vals[i] - prev) * (n - i)
            prev = vals[i]
        


