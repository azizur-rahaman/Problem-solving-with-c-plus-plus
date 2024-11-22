T = int(input())

lst = list(map(int,input().split()))

for x in lst:
    if(x < 15):
        print("NO")
    elif(x%14 >= 1 and x%14 <= 6):
        print("YES")
    else:
        print("NO")
