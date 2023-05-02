Money = float(input())
note = [100, 50, 20, 10, 5, 2]

z = int(Money)

print("NOTAS:")
for x in note:
    n = int(z/x);
    print(str(n)+" nota(s) de R$ "+str(x)+".00")
    z = z-(n*x)

coins = [1.0, 0.50, 0.25, 0.10, 0.05, 0.01]
z = (Money - int(Money)) + z
print("MOEDAS:")

for x in coins:
    n = int(z/x);
    x = "{:.2f}".format(x)
    print(str(n)+" moeda(s) de R$ "+str(x))
    z = z - (float(n) * float(x))
    z = "{:.2f}".format(z)
    z = float(z)
