T = int(input())

for _ in range(T):
    n, x = map(int, input().split())

    if n <= 2:
        print(1)
    else:
        cnt = 2
        i = 1

        while(cnt < n):
            cnt = (i * x) + 2
            i+=1
        print(i)