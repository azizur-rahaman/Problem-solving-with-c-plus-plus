for _ in range(int (input ())):
    n = int(input())
    a = list (map(int, input().split()))
    for i in range(1,n//2):
        if a[i]==a[i-1] or a[n-i-1]==a[n-i]:
            a[i],a[n-1-i] = a[n-i-1],a[i]
    print(sum(a[i]==a[i-1] for i in range(1,n)))