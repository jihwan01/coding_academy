a = input("")
while len(a) % 3 != 0:
    a = '0' + a

res = ''
for i in range(0, len(a), 3):
    temp = int(a[i])*4 + int(a[i+1]) * 2 + int(a[i+2]) 
    res = res + str(temp)
    
print(res)
