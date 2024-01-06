n = input()

def sum(n): # O(N^2)
    res = 0
    for i in range(1,n+1):
        temp = i
        cnt = 0;
        while temp <= n:
            if(temp == n):
                res += 1
                break
            cnt += 1
            temp += (i + cnt)
    return res


def sum2(n): # O(N)
    count = 0
    start = 1
    end = 1
    sum = 1

    while start <= n//2:
        if sum < n:
            end += 1
            sum += end
        elif sum > n:
            sum -= start
            start += 1
        else:
            count += 1
            sum -= start
            start += 1

    return count + 1 
print(sum2(int(n)))