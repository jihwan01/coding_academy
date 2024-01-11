import copy

N, M, V = map(int, input().split())

matrix_d = [[0 for _ in range(N+1)] for _ in range(N+1)]
visited = list()


for i in range(M):
    a,b = map(int, input().split())
    matrix_d[a][b] = matrix_d[b][a] = 1

matrix_b = copy.deepcopy(matrix_d)

res_b = []
res_d = []

def DFS(x):
    res_d.append(x)
    for i in range(1,N+1):
        matrix_d[i][x] = 0
    for i in range(1,N+1):
        if(matrix_d[x][i] == 1):
            DFS(i) 
            
    
def BFS(x):
    q = [x]
    for j in range(1,N+1):
        matrix_b[j][x] = 0
    while q:
        v = q.pop(0)
        res_b.append(v)
        for i in range(1,N+1):
            if(matrix_b[v][i] == 1):
                q.append(i)        
                for j in range(1,N+1):
                    matrix_b[j][i] = 0
            
DFS(V)
BFS(V)

for i, v in enumerate(res_d):
    if(i != len(res_d)-1):
        print(v, end=" ")
    else:
        print(v, end="\n")
    
for i, v in enumerate(res_b):
    if(i != len(res_b)-1):
        print(v, end=" ")
    else:
        print(v)
    