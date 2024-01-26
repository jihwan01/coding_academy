#5430

def getResult(fstr, n, arr):
    r = False
    if(n != 0):
        narr = list(map(int,arr[1:-1].split(',')))
    else:
        narr = list()
    
    for c in fstr:
        if c=='R':
            r = not r
        elif c == 'D':
            if(len(narr) < 1):
                return 'error'
            if(r):
                narr.pop()
            else:
                narr.pop(0)
            
    
    return '[' + ','.join(map(str, narr if not r else narr[::-1])) + ']'

T = int(input())
for _ in range(T):
    fstr = input()
    n = int(input())
    arr = input()
    print(getResult(fstr, n, arr))