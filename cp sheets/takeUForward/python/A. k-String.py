k = int(input())
s = input()
hash = {chr(i): 0 for i in range(ord('a'), ord('z') + 1)}

for x in s:
    hash[x] += 1

for count in hash.values():
    if count % k != 0:
        print(-1)
        break
else:
    ans = ''.join(char * (count // k) for char, count in hash.items() if count > 0)
    print(ans * k)
