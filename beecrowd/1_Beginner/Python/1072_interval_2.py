n = int(input())
IN = 0
out = 0
for i in range(n):
    n = int(input())
    if n>=10  and  n<=20:
        IN = IN+1
    else:
        out = out + 1

print(str(IN) + " in")
print(str(out) + " out")