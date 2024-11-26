n = int(input())

x,r = divmod(n,4)

if(n%2 == 1):
    print(0)
elif(r == 0):
    print(x-1)
else:
    print(x)


