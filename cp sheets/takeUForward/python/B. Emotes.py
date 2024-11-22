
def solve():

   n,m,k = map(int,input().split())
   a = list(map(int,input().split()))

   a.sort(reverse=True)

   largest = a[0]
   second_largest = a[1]

   full_cycles = m// (k+1)
   remainder = m % (k+1)

   result = full_cycles * (largest * k + second_largest)

   result += remainder * largest

   print(result)

if __name__ == "__main__":
    T = 1
    # T = int(input())

    for _ in range(T):
        solve()