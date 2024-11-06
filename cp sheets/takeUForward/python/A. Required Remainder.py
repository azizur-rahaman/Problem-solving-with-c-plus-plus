T = int(input())

for _ in range(T):
    x,y,n = map(int, input().split())

    temp = (x+y)
    ans = ((n//x) * x) + y

    if(ans > n):
        ans -= x

    print(ans)