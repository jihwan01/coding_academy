import sys
sys.setrecursionlimit(30000)

N, M = map(int, input().split())

matrix = [[0 for _ in range(N+1)] for _ in range(N+1)]

for i in range(M):
    a, b = map(int, input().split())
    matrix[a][b] = matrix[b][a] = 1

res = 1
min = float('inf')

def DFS(x, d, dist):
    dist[x] = d
    for i in range(1, N+1):
        if(matrix[x][i] == 1 and dist[i] > d+1):
            DFS(i, d+1, dist)

def BFS(x):
    q = [x]
    dist = [-1 for _ in range(N+1)]
    dist[x] = 0
    while q:
        nx = q.pop(0)
        for i in range(1, N+1):
            if(matrix[nx][i] == 1 and dist[i] == -1):
                q.append(i)
                dist[i] = dist[nx] + 1
    sum = 1
    for j in dist:
        sum += j
    return sum    

for i in range(1, N+1):
    t = BFS(i)
    # print('This is t of index ', str(i), ' : ', str(t))
    if(t < min):
        res = i
        min = t
        

for i in range(1,N+1):
    dist = [1000 for _ in range(N+1)]
    DFS(i, 0, dist)
    sum = -1000
    for j in dist:
        sum += j
    if(sum < min):
        res = i
        min = sum

print(res)