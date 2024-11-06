T = int(input())

for _ in range(T):
    n = int(input())

    if(n == 1 or n == 2):
        print(1)
    else:
        if(n%2 == 0):
            print(n//2)
        else:
            print((n//2) + 1)