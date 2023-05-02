N = int(input())
C = int(0)
R = int(0)
S = int(0)
totalAnimal = int(0)

for i in range(N):
    row = list(map(str, input().split()))
    amount = int(row[0])
    type = row[1]

    totalAnimal = totalAnimal + amount;

    if type == 'C':
        C = C + amount;
    elif type == 'R':
        R = R + amount;

    elif type == 'S':
        S = S + amount;

print("Total: "+ str(totalAnimal)+" cobaias");
print("Total de coelhos: "+ str(C));
print("Total de ratos: "+ str(R));
print("Total de sapos: "+ str(S));

avg = "{:.2f}".format((C*100.00)/totalAnimal)
print("Percentual de coelhos: " + str(avg) +" %")
avg = "{:.2f}".format((R*100.00)/totalAnimal)
print("Percentual de ratos: " + str(avg) +" %")
avg = "{:.2f}".format((S*100.00)/totalAnimal)
print("Percentual de sapos: " + str(avg) +" %")