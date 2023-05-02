z = int(input())
note = [100, 50, 20, 10, 5, 2, 1]
print(z)
for x in note:
    n = int(z/x);
    print(str(n)+" nota(s) de R$ "+str(x)+",00")
    z=z-(n*x)
