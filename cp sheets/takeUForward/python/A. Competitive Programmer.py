def checkRed(number):
    digits = list(map(int, number))
    
    if sum(digits) % 3 != 0:
        print("cyan")
        return 0
    
    if digits.count(0) == 0:
        print("cyan")
        return 0
    
    if digits.count(0) > 1 or any(d % 2 == 0 for d in digits if d != 0):
        print("red") 
        return 0   
    print("cyan")
    return 0

n = int(input())
results = []

for _ in range(n):
    y = input().strip()
    checkRed(y)
