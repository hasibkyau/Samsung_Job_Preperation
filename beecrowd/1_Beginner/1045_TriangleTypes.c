#include <stdio.h>

int main()
{
    double a,b,c, min, mid, max;

    scanf("%lf %lf %lf", &a, &b, &c);
    if(a>=b && a>=c)
    {
        max=a;
        if(b>=c)
        {
            mid=b;
            min=c;
        }
        else
        {
            mid=c;
            min=b;
        }
    }
    else
    {
        if(b>=a && b>=c)
        {
            max=b;
            if(a>=c)
            {
                mid=a;
                min=c;
            }
            else
            {
                mid=c;
                min=a;
            }
        }
        else
        {
            max=c;
            if(a>=b)
            {
                mid=a;
                min=b;
            }
            else
            {
                mid=b;
                min=a;
            }
        }
    }
    a = max;
    b=mid;
    c=min;

    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(a*a == b*b + c*c) printf("TRIANGULO RETANGULO\n");
        if(a*a > b*b + c*c) printf("TRIANGULO OBTUSANGULO\n");
        if(a*a < b*b + c*c) printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else
        {
            if((a==b) || (b==c) || (a==c))
            {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }

    return 0;
}
