T = int(input())

for _ in range(T):
    n = int(input())
    a = list(input().strip())
    b = input().strip()
    
    op = 0
    i = 1
    while i < n:
        if a[i] != a[i-1] and op < len(b):
            for j in range(i+1, n):
                if a[j] != b[op]:
                    op += 1
                    if op >= len(b): 
                        i = n 
                        break
                else:
                    i = j
                    break
        else:
            i += 1  
    
    print(op)
