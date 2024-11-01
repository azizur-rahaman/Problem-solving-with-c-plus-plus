T = int(input())


for _ in range(T):
    n = int(input())
    lst = list(map(int, input().split()))

    even = sum(1 if i % 2 == 0 else 0 for i in lst)
    odd = sum(1 if i % 2 == 1 else 0 for i in lst)

    cnt = sum(lst)

    if(cnt % 2 == 1):
        print("YES")
    else:
        if(even >= 1 and odd >= 1):
            print("YES")
        else:
            print("NO")
    
