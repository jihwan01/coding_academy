n = int(input())
c = 1
while n > 10 ** c:
    if(n%10 ** c >= 10 ** c / 2 ):
        n = n - n%10**c + 10**c
    else:
        n = n - n%10**c 
    c = c + 1

print(n)