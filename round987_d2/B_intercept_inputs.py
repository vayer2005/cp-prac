t = int(input())

for i in range(t):
    k = int(input())

    a = [int(x) for x in input().split()]

    dic = {}
    for c in a:
        if c in dic:
            dic[c] += 1
        else:
            dic[c] = 1 
    k -= 2

    for i, val in dic.items():
        
        if (k%i == 0):
            if (i in dic):
                if (int(k/i) == i):
                    if dic[i] >= 2:
                        print(str(i) + " " + str(int(k/i)))
                        break
                else:
                    if (int(k/i) in dic):
                        print(str(i) + " " + str(int(k/i)))
                        break
    



    

