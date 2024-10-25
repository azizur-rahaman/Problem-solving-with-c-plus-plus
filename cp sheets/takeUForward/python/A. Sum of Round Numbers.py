T = int(input())

for i in range(T):
    n = input()

    result = list()

    for i in range(len(n)):
        if(n[i] != '0'):
            result.append(n[i] + ('0' * (len(n)-i-1)))
    print(len(result))
    print(*result)

