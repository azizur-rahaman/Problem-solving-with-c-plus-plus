T = int(input())

cnt = 0

for _ in range(T):
    ss = input()

    if(ss.__contains__('++')):
        cnt +=1
    else: 
        cnt -=1

print(cnt)