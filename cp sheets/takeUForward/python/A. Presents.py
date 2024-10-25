T = int(input())

lst = map(int, input().split(" "))

result = [0] * T

for index,value in enumerate(lst):
    result[value-1] = index + 1

print(*result)
