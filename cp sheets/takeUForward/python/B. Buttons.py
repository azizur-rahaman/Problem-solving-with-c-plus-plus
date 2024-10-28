n = int(input())

if(n == 1):
    print(1)
else:
    cnt = 0

    for i in range(1,n+1):
        cnt += (n-i) * i

    print(cnt+n)