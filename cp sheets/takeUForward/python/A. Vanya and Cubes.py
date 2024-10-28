n = int(input())

ans = 1
total = 1
i = 1

while( total < n):
    i += 1
    ans += i

    total += ans
    if(total > n):
        i -= 1
        
print(i)

