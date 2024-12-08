
# have issue, fix it

x,y,s = map(int, input().split())

if((s - (x+y)) % 2 == 0 and (x+y) >= s):
    print("Yes")
else:
    print("No")