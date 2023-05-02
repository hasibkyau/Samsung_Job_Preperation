import math
N = int(input())
time = [];

for x in range(N):
    z = input()
    PA, PB, G1, G2 = z.split()

    PA = int(PA)
    PB = int(PB)
    G1 = float(G1)
    G2 = float(G2)
    years = 0;

    while PA <= PB:
        f, i = math.modf((PA*G1)/100)
        PA = PA + i;

        f, i = math.modf((PB * G2) / 100)
        PB = PB + i;
        years = years+1;
        if years > 100:
            break;

    time.append(years)



for x in time:
    if int(x)>100:
        print("Mais de 1 seculo.")
    else:
        print(str(x) + " anos.")



