tt = input()

total_cnt = tt.count('7') + tt.count('4')

flag = False

for x in str(total_cnt):
    if(x != '7' and x != '4'):
        flag = True
        break

if(flag):
    print("NO")
else:
    print("YES")





# tt = input()

# flag = False
# cnt = 0

# for x in tt:
#     if(x != '7' and x != '4'):
#         flag = True
#     else:
#         cnt += 1

# if(flag):
#     flag2 = False
#     for x in str(cnt):
#         if(x != '7' or x != '4'):
#             flag2 = True
#             break
    
#     if(flag2):
#         print("NO")
#     else:
#         print("YES")
# else:
#     print("YES")


