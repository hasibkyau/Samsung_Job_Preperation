import math
z = input()
a, b, c = z.split()

a = float(a)
b = float(b)
c = float(c)

ptr = (b*b) - (4*a*c)

if ptr > 0 and a != 0:
    r1 = (-b + math.sqrt(ptr))/(2*a)
    r1 = "{:.5f}".format(r1)

    r2 = (-b - math.sqrt(ptr))/(2*a)
    r2 = "{:.5f}".format(r2)

    print("R1 = " + str(r1))
    print("R2 = " + str(r2))
else:
    print("Impossivel calcular")

