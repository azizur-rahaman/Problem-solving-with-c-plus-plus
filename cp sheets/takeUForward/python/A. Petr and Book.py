n = int(input())
lst = list(map(int,input().split()))

i = 0
cnt = 0

while cnt < n:
    cnt += lst[i]
    
    i += 1
    if(cnt < n):
        i %= 7
print(i) 
