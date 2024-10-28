T = int(input())

for _ in range(T):
    n = int(input())

    print(2)
    
    operations = []
    
    current_value = n
    
    for i in range(n - 1, 0, -1):
        operations.append((current_value, i))
        
        current_value = (current_value + i + 1) // 2

    for op in operations:
        print(op[0], op[1])
