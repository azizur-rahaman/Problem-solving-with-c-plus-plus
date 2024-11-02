T = int(input())

for _ in range(T):
    x,y,z = map(int, input().split())

    if x == y and y == z:
        print("YES")
        print(x, x, x)
    elif (x == y or y == z or x == z) and not((x == y and x < z) or (y == z and y < x) or (x == z and x < y)):
        if(x == y and x > z):
            print("YES")
            print(x, x, z)
        elif x == z and x > y:
            print("YES")
            print(x, x, y)
        elif y == z and y > x:
                print("YES")
                print(x, y, y)
    else:
        print("NO")



  
T = int(input())

for _ in range(T):
    lst = list(map(int, input().split()))

    lst.sort()

    if( lst[1] == lst[2] ):
        print("YES")
        print(lst[2], lst[0], lst[0])
    else:
        print("NO")
  
