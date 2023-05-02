z=input()
a,b,c= z.split()

a=float(a)
b=float(b)
c=float(c)

if a>=b and a>=c:
    max=a;
    if b>=c:
        mid=b;
        min=c;
    else:
        mid=c;
        min=b;
else:
    if b>=a and b>=c:
        max=b;
        if a>=c:
            mid=a;
            min=c;
        else:
            mid=c;
            min=a;
    else:
        max=c;
        if a>=b:
            mid=a;
            min=b;
        else:
            mid=b;
            min=a;
a = max;
b=mid;
c=min;

if a>=b+c:
    print("NAO FORMA TRIANGULO");
else:
    if a*a == b*b + c*c:
        print("TRIANGULO RETANGULO");
    if a*a > b*b + c*c:
        print("TRIANGULO OBTUSANGULO");
    if a*a < b*b + c*c:
        print("TRIANGULO ACUTANGULO");
    if a==b and b==c:
        print("TRIANGULO EQUILATERO");
    else:
        if (a==b) or (b==c) or (a==c):
            print("TRIANGULO ISOSCELES");

