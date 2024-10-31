n, k, c = [int(x) for x in input().split()]

q = []
res = []

schools = {}

for i in range(n):
    teamId, schoolId = [int(x) for x in input().split()]

    if (schools.get(schoolId, 0) < c):
        schools[schoolId] = schools.get(schoolId, 0) + 1
        res.append(teamId)
    else:
        q.append(teamId)

for val in q:
    res.append(val)

for i in range(k):
    print(str(res[i]))





