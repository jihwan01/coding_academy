import sys

input = sys.stdin.readline

n,m = map(int, input().split())
tree = [[] for _ in range(n+1)]

for _ in range(n-1):
    a, b, l = map(int, input().split())
    tree[a].append((b, l))
    tree[b].append((a, l))
    
def bfs(start, find):
    q = []
    q.append((start, 0))
    visited = [False for _ in range(n + 1)]
    visited[start] = True
    while q:
        a, d = q.pop(0)
        visited[a] = True
        if(a == find):
            return d
        
        for i, id in tree[a]:
            if(not visited[i]):
                q.append((i, id+d))
                
for _ in range(m):
    s, f = map(int, input().split())
    print(bfs(s,f))
    

                