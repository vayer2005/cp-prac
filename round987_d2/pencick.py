t = int(input())

for i in range(t):
    n = int(input())
    vals = [int(x) for x in input().split()]

    counts = {}
    for v in vals:
        if v in counts:
            counts[v] += 1
        else:
            counts[v] = 1

    maxCount = 0
    maxVal=0
    for val, count in counts.items():
        if count > maxCount:
            maxCount = count
            maxVal = val
    index = 0
    for i in range(len(vals)):
        if vals[i] == maxVal:
            index = i
            break
    switches = 0

    for i in range(n):
        if i < index and vals[i] > maxVal:
            switches += 1
        elif i > index and vals[i] < maxVal:
            switches += 1
    
    print(switches)
    
    

    
