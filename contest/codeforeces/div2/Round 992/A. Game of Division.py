def solve_game(n, k, arr):
    for i in range(n):
        can_win = True
        for j in range(n):
            if j == i:
                continue
            if abs(arr[i] - arr[j]) % k == 0:
                can_win = False
                break
        
        if can_win:
            return True, i+1
    
    return False, -1

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    possible, index = solve_game(n, k, arr)
    
    if possible:
        print("YES")
        print(index)
    else:
        print("NO")