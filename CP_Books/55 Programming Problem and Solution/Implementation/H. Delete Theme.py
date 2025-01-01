n,m = map(int, input().split())

stringLst = []

for _ in range(n):
    stringLst.append(input())

posList = list(map(int, input().split()))


firsLen = len(stringLst[posList[0]-1])

flag = True

for x in posList:
    if(firsLen != len(stringLst[x-1])):
        flag = False
        break


if(not flag):
   print("No")
else:
    ss = stringLst[posList[0]-1]

    for x in posList:
        if(x != posList[0]):
            for i in range(firsLen):
                if(ss[i] != stringLst[x-1][i]):
                    ss = ss[0:i]+'?'+ss[i+1:]
    
    lenList = []

    for i in range(n):
        if(not ((i+1) in posList)):
            lenList.append(i)
                    
    for k in lenList:
        if(len(stringLst[k]) == firsLen):
            temp = ""

            for i in range(firsLen):
                if(stringLst[k][i] != ss[i]):
                    temp += '?'
                else:
                    temp += ss[i]
            
            if(temp == ss):
                flag = False
                break
        
        if(not flag):
            break
    
    if(flag):
        print("Yes")
        print(ss)
    else:
        print("No")    


