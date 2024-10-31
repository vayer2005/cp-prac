board = []
n = int(input())
for i in range(n):
    currRow = []
    s = input()
    for j in range(n):
        currRow.append(s[j])
    board.append(currRow)

blocked = ['0','1','2','3','4','X']

def lightRC(i, j):
    down = i+1
    up = i - 1
    right = j+1
    left = j - 1

    while (down < n and board[down][j] not in blocked):
        if (board[down][j] == '?'):
            return False
        board[down][j] = 'l'
        down += 1

    while (up > -1 and board[up][j] not in blocked):
        if (board[up][j] == '?'):
            return False
        board[up][j] = 'l'
        up -= 1

    while (right < n and board[i][right] not in blocked):
        if (board[i][right] == '?'):
            return False
        board[i][right] = 'l'
        right += 1

    while (left > -1 and board[i][left] not in blocked):
        if (board[i][left] == '?'):
            return False
        board[i][left] = 'l'
        left -= 1
    return True

sol = True
for i in range(n):
    for j in range(n):
        if board[i][j] == "?":
            if not lightRC(i,j):
                sol = False


for i in range(n):
    for j in range(n):
        if board[i][j] == '.':
            sol = False
        if board[i][j] in blocked and board[i][j] != 'X':
            tSum = 0
            if (i+1 < n and board[i+1][j] == '?'):
                tSum += 1
            if (i-1 > -1 and board[i-1][j] == '?'):
                tSum += 1
            if (j+1 < n and board[i][j+1] == '?'):
                tSum += 1
            if (j-1 > -1 and board[i][j-1] == '?'):
                tSum += 1
            
            if tSum != int(board[i][j]):
                sol = False

    
if sol:
    print(1)
else:
    print(0)