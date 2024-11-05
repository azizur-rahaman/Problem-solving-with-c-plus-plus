T = int(input())

for _ in range(T):
    n = int(input())
    lst = list(map(int, input().split()))

    cnt1 = lst.count(1)
    cnt0 = lst.count(0)

    print(cnt1 % 2, min(cnt0, cnt1))