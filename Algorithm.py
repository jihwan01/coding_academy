T = int(input())

dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

def BFS(x,y):
  q = [(x,y)]
  matrix[x][y] = 0
  
  while q:
    x,y = q.pop(0)
    
    for i in range(4):
      nx = x + dx[i]
      ny = y + dy[i]

      if(nx >= 0 and nx < m and ny >= 0 and ny < n and matrix[nx][ny] == 1):
        q.append((nx, ny))
        matrix[nx][ny] = 0 
  
  

for i in range(T):
  m, n, k = map(int, input().split())
  
  matrix = [[0 for _ in range(n)] for _ in range(m)]
  res = 0
  
  for j in range(k):
    x,y = map(int, input().split())
    matrix[x][y] = 1
  
  for a in range(m):
    for b in range(n):
      if(matrix[a][b] == 1):
        BFS(a,b)
        res += 1
  print(res)