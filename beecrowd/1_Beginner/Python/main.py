z=input()
x,a,y,b= z.split()

x=int(x)
a=int(a)
y=int(y)
b=int(b)


if x == y and a > b:

    h = 23;
    m = (60 - a) + b;

elif x == y and a == b:
    h = 24;
    m = 0;

else:

    if x > y:

        h = (24 - x) + y;

    else:

        h = (y - x);

    if a <= b:

        m = b - a;

    else:
        m = (60 - a) + b;
        h = h - 1;

print("O JOGO DUROU " + str(h) + " HORA(S) E " + str(m) + " MINUTO(S)");

