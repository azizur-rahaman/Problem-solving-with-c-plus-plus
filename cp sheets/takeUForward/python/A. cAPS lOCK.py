ss = input()
cntU = sum(1 for x in list(ss) if x.isupper())


if(ss[0].islower() and cntU == len(ss)-1):
    print(ss.capitalize())
elif cntU == len(ss):
    print(ss.lower())
else:
    print(ss)
