PARENS = "()[]{}"

def main():
    n = int(input())
    s = [PARENS.index(c) for c in input()]
    tree = [[] for _ in range(n)]
    for _ in range(n - 1):
        u, v = (int(x) - 1 for x in input().split())
        tree[u].append(v)
        tree[v].append(u)

    ans = 0
    for root in range(n):
        root_type = s[root]
        if root_type % 2 == 1:
            continue

        parent = [-1 for _ in range(n)]
        stk = [root]
        vis = [False for _ in range(n)]
        vis[root] = True
        while stk:
            u = stk.pop()
            if s[u] % 2 == 0:
                cur = u
            elif parent[u] != -1 and s[u] - 1 == s[parent[u]]:
                cur = parent[parent[u]]
            else:
                continue

            ans += int(cur == -1)
            for v in tree[u]:
                if not vis[v]:
                    vis[v] = True
                    parent[v] = cur
                    stk.append(v)

    print(ans)


if __name__ == "__main__":
    main()
