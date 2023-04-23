
#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b==c || b+c==a || a+c==b){
        printf("Area = %.1f\n", ((a+b)/2)*c);
    }
    else{
        printf("Perimetro = %.1f\n", a+b+c);
    }


    return 0;
}



