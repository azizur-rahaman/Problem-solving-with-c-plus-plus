T = int(input())

for _ in range(T):
    n,m = map(int,input().split())
    cnt = n * int(m/2)

    if(m % 2 == 1):
        cnt += n/2
        if(n % 2 == 1):
            cnt += 1
    
    print(int(cnt))