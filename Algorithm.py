import sys
sys.setrecursionlimit(100000000)
input = sys.stdin.readline

N, Q = map(int, input().split())

matrix = list(map(int, input().split()))
tree = [0 for _ in range(N*4+5)]
    
def init(s, e, index):
    if s == e:
        tree[index] = matrix[s]
        return matrix[s]
    m = (s+e) // 2
    tree[index] = init(s, m, index*2) + init(m+1, e, index*2 + 1)
    
    return tree[index]

def intervalSum(s, e, index, l, r):
    if e < l or s > r:
        return 0
    if s >= l and e <= r:
        return tree[index]
    m = (s+e) // 2
    return intervalSum(s, m, index*2, l, r) + intervalSum(m+1, e, index*2+1, l, r)

def update(s, e, index, x, v):
    if s > x or x > e:
        return
    m = (s+e) // 2
    tree[index] += v
    if s == e:
        return
    update(s, m, index*2, x, v)
    update(m+1, e, index*2+1, x, v)
    
    
init(0, N-1, 1)

results = []
for i in range(Q):
    x,y,a,b = map(int, input().split())
    if(y < x):
        x, y = y, x
    results.append(intervalSum(0,N-1,1,x-1,y-1))
    dist = b - matrix[a-1]
    matrix[a-1] = b
    update(0, N-1, 1, a-1, dist)

sys.stdout.write('\n'.join(map(str,results)))