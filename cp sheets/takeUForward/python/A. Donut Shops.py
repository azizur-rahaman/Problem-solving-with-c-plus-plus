n = int(input())

for _ in range(n):
    a,b,c = map(int,input().split())

    if(c <= a):
        print("-1 ", end="")
    else:
        print(1,end=" ")
    
    if(a*b <= c):
        print(-1)
    else:
        print(b)