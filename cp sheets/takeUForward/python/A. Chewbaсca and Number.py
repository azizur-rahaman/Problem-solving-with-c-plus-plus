T = input()

for i in range(len(T)):
    if(int(T[i]) >= 5):

        if(i == 0 and int(T[i]) == 9):
            continue
        T = T[:i] + str(9-int(T[i])) + T[i+1:]

print(T)