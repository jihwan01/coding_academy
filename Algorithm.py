import sys
sys.setrecursionlimit(1000000)

N = int(input())

matrix = [[] for _ in range(N+1)]
parent = [-1 for _ in range(N+1)]


def DFS(x):
    for i in matrix[x]:
        if(parent[i] == -1):
            parent[i] = x
            DFS(i)

for i in range(N-1):
    a, b = map(int, input().split())
    matrix[a].append(b)
    matrix[b].append(a)

DFS(1)

for i in parent[2:N+1]:
    print(i)
    
    