def solve():
    x, y = map(int, input().split())
    
    if x > 3:
        print("YES")
    elif x == 1:
        print("YES" if y == 1 else "NO")
    else:
        print("YES" if y <= 3 else "NO")

def main():
    T = int(input())
    for _ in range(T):
        solve()

if __name__ == "__main__":
    main()
