T = int(input())

for _ in range(T):
    n, a, b = map(int, input().split())
    ss = input()

    x, y = 0, 0

    
    
    while(x < a and y < b):
            for temp in ss:
                if temp == 'N':
                    y += 1
                elif temp == 'S':
                        y -= 1
                elif temp == 'E':
                        x += 1
                elif temp == 'W':
                        x -= 1

    if(x == 0 or y ==0):
        print('NO')
    else:
        while(x < a and y < b):
            x += x
            y += y
        if(x == a and y == b):
            print('YES')
        else:
            print('NO')

    
