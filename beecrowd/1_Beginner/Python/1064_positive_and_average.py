list = []
count = 0;
sum = 0;
for i in range(6):
    val = float(input())
    if val > 0.00:
        count = count + 1
        sum = sum + val

print(str(count) + " valores positivos")
average = float(sum / count)
average = "{:.1f}".format(average)
print(average);

