T = int(input())

string = input()
i = 1

while i < len(string)-1:
    if(i+i+1 < len(string)-1):
        string = string[:i+1]+string[i+i+1:]
    else:
        string = string[:i+1]
        
    i += 1

print(string)
    