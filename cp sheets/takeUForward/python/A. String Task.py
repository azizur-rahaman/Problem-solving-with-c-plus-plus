ss = input()
ss = ss.lower()
vowels = ['a','e','i','o','u','y']

_ = 0
while(_ < len(ss)):
    if ss[_] in vowels:
        ss = ss[:_]+ss[_+1:]
    else:
        _ += 1

if(len(ss)==0):
    print()
else:
    print('.'+'.'.join(list(ss)))