x, y, z = map(int, input().split())

total_coconuts_without_exchange = (x + y) // z

remainder_x = x % z
remainder_y = y % z

total_remainder = remainder_x + remainder_y

if total_remainder >= z:
    min_transfer = min(z - remainder_x, z - remainder_y)
else:
    min_transfer = 0

print(total_coconuts_without_exchange, min_transfer)
