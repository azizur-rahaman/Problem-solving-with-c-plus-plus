ch = input()
lst = map(str, input().split(" "))

flag = False

for temp in lst:
    if(ch[0] in temp or ch[1] in temp):
        flag = True
        break


if(flag):
    print("YES")
else:
    print("NO")