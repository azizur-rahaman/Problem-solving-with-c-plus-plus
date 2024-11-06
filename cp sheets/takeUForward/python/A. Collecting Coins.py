T = int(input())

for _ in range(T):
    a,b,c,n = map(int, input().split())

    lst = [a,b,c]
    lst.sort()

    n = n - (lst[2] - lst[0])
    n = n - (lst[2] - lst[1])

    if(n < 0 or n % 3 >= 1):
        print("NO")
    else:
        print("YES")
