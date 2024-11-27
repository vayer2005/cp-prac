def main():
    n, m, start, p, q = map(int, input().split())
    start -= 1
    have = [False for _ in range(n)]
    want = [False for _ in range(n)]
    for _ in range(p):
        x = int(input()) - 1
        have[x] = True
    for _ in range(q):
        x = int(input()) - 1
        want[x] = True

    if have == want:
        print(0)
        return

    # first and last pages
    ans = 0
    first = None
    last = None
    for s in range(0, n, m):
        if have[s : s + m] == want[s : s + m]:
            continue
        page = s // m
        if first is None:
            first = page
        last = page

        toggle = sum(h != w for h, w in zip(have[s : s + m], want[s : s + m]))
        select = 1 + sum(not w for w in want[s : s + m])
        deselect = 1 + sum(want[s : s + m])

        ans += min(toggle, select, deselect)

    if start < first:
        ans += first - start
        start = first
    if start > last:
        ans += start - last
        start = last

    ans += last - first + min(start - first, last - start)

    print(ans)


if __name__ == "__main__":
    main()
