[n,m] = list(map(int, input().split()))

def getDivNum(a):
    if(a == 1):
        return 0
    return getDivNum(a // 2) + getDivNum( a - a//2) + 1

print(getDivNum(n) + n * getDivNum(m))