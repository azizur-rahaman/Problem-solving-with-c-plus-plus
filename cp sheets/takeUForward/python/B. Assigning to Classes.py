T = int(input())

for _ in range(T):
    n = int(input())
    lst = list(map(int, input().split()))

    group1 = []
    group2 = []

    lst.sort()

    flag = True
    for i in range(n):
        len = n+n

        group1.append(lst[i])
        group2.append(lst[i+1])

        if(i != n-1):
            group1.append(lst[len-i-1])
            group2.append(lst[len-i-2])


    group1.sort()
    group2.sort()

    print(abs(group1[n-1]-group2[n-1]))