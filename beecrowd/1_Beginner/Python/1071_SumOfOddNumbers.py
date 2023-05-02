x = int(input())
y = int(input())
sum = int(0)
temp = int(0)


while (True):
    x = x - 1;
    temp = abs(x);
    if temp % 2 == 1 and x != y:
        sum += x;

    if x == y:
        break;

print(sum);
