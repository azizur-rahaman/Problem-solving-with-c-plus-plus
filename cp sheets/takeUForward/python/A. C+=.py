import math
T = int(input())

for _ in range(T):
    a,b,n = map(int,input().split(" "))

    cnt = 0

    while (a <= n and b <= n):
        if(a>b):
            b += a
        else:
            a += b
        cnt += 1

    print(cnt)


