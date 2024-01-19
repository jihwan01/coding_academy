import sys

sys.setrecursionlimit(100000000)
input = sys.stdin.readline
s = input().strip()
bs = input().strip()

blen = len(bs)
index = 0
st = []
for c in s:
    st.append(c)
    if(st[-blen:] == list(bs)):
        for _ in range(blen):
            st.pop()


if(len(st) == 0):
    print('FRULA') 
else:
    for i in st:
        print(i, end ="")
    print()
