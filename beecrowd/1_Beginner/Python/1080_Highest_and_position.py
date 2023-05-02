max = int(0);
pos = int(0);
temp = int(0);

for i in range(100):
    temp = int(input())
    if temp > max:
        max = temp;
        pos = i+1;

print(max);
print(pos);

