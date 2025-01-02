
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    idx = 1
    
    results = []
    for _ in range(t):
        n, x, y = map(int, data[idx:idx+3])
        idx += 3
        if x > y:
            x, y = y, x
        if x != 0 or y == 0 or (n - 1) % y != 0:
            results.append("-1")
            continue
        result = []
        for k in range(2, n + 1, y):
            for _ in range(y):
                result.append(str(k))
        results.append(" ".join(result))
    
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    main()
