count = 0
for i in range(5):
    x = int(input())
    if abs(x)%2 == 0:
        count = count + 1

print(str(count) + " valores pares")
