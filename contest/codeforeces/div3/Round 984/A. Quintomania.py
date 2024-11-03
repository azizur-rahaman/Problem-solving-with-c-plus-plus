T = int(input())

for x in range(T):
    n = int(input())
    lst = list(map(int, input().split()))

    flag = True

    for i in range(1, n):
        distance = abs(lst[i] - lst[i - 1])

        if distance != 5 and distance != 7:
            flag = False
            break
    
    if flag:
        print("YES")
    else:
        print("NO")







        
# t = int(input().strip())

# results = []

# for i in range(t):
#     n = int(input().strip())
#     notes = list(map(int, input().strip().split()))
    
#     is_perfect = True
    
#     for j in range(1, n):
#         interval = abs(notes[j] - notes[j - 1])
#         if interval not in [5, 7]:
#             is_perfect = False
#             break
    
#     result = "YES" if is_perfect else "NO"
#     results.append(result)

# print("\n".join(results))
