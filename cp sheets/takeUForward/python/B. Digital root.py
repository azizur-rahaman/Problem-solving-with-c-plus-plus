T = int(input())

for _ in range(T):
    x,y = map(int,input().split())

    print(y + ((x-1)*9))