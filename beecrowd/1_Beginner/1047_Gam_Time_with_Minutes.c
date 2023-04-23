#include <stdio.h>

int main()
{
    int x,a,y,b,h,m;
    scanf("%d %d %d %d", &x, &a, &y, &b);

    if(x==y && a>b)
    {
        h=23;
        m=(60-a)+b;
    }
    else if(x==y && a==b){
        h=24;
        m=0;
    }
    else
    {
        if(x>y)
        {
            h = (24-x)+y;
        }
        else
        {
            h = (y-x);
        }


        if(a<=b)
        {
            m=b-a;
        }
        else
        {
            m=(60-a)+b;
            h--;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    return 0;
}

