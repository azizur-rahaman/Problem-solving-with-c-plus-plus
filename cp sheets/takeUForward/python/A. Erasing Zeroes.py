T = int(input())

for _ in range(T):
    n = int(input())


    for j in range(len(str(n))-1,-1,-1):
        if(str(n)[j] == '1'):
            break
    
    print(sum(str(n)[i] == '0' for i in range(j)))
    