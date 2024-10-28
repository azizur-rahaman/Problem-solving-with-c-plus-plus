n,m = map(int, input().split())
cnt = 0

if(n == m):
    print(0)
elif(m%n == 0):
    d = m/n

    while d % 2 == 0:
        d /= 2
        cnt += 1
    while d % 3 == 0:
        d /= 3
        cnt += 1

    if(d != 1):
        print(-1)
    else:
        print(cnt)
else:
    print(-1)
    
    
    




