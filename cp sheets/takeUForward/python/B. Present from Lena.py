n = int(input())
k = (n + n) + 1

#upper part
for i in range(n):
    for j in range(n-i):
        print("  ", end="")

    if(i!=0):
        for j in range(i):
            print(j,end=" ")
        print(i, end=" ")
        for j in range(i-1,-1,-1):
            if(j!=0):
                print(j, end=" ")
            else:
                print(j,end="")
    else:
        print("0",end="")
    print()

for i in range(n+1):
    print(i,end=" ")
for i in range(n-1,-1,-1):
    if(i != 0):
        print(i,end=" ")
    else:
        print(i)

#below part
for i in range(n-1,-1,-1):
    for j in range(n-i):
        print("  ", end="")

    if(i!=0):
        for j in range(i):
            print(j,end=" ")
        print(i, end=" ")
        for j in range(i-1,-1,-1):
            if(j !=0):
                print(j,end=" ")
            else:
                print(j,end="")
    else:
        print("0",end="")
    print()
    

