n = int(input())

s = input()

dic = {}

matches ={')':'(', '}':'{', ']':'['}

for i in range(n-1):
    f, t = [int(x) for x in input().split(' ')]
    if f in dic:
        dic[f].append(t)
    else:
        dic[f] = [t]


def dfs(index, stack):
    stack.append(s[index-1])
    #if ()
