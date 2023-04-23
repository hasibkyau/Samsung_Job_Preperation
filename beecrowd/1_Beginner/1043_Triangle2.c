#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    if((a+b)==c || (a+c)=b || (b+c)==a){
        printf("Area = %.1f", a+b+c);
    }
    else{
        printf("Perimetro = %.1f", a+b+c);
    }

    return 0;
}



