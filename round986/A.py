t = int(input())

for k in range(t):
    n,a,b = [int(x) for x in input().split()]

    direc = input()
    fdir = []
    for c in direc:
        if c == "N":
            fdir.append([0,1])
        elif c == "S":
            fdir.append([0,-1])
        elif c == "E":
            fdir.append([1,0])
        else:
            fdir.append([-1,0])
    

    currCord = [0,0]
    index = 0
    found = False

    while True:
        if currCord == [a,b]:
            found = True
            break
        else:   
            currCord = [currCord[0] + fdir[index][0], currCord[1] + fdir[index][1]]
            if index == len(fdir) - 1 and (abs(currCord[0] - a) + abs(currCord[1] - b) >= a + b):
                break
            index = (index + 1) % len(fdir)
            
    
    if found:
        print("YES")
    else:
        print("NO")
        



