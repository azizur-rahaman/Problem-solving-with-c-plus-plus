T = int(input())

for _ in range(T):
    n, m = map(int, input().split())
    if n == 1:
        print(0)
    elif n == 2:
        print(m)
    else:
        print(2*m)