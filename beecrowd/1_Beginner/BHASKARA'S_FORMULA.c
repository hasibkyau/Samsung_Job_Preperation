#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c, ptr, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    ptr =  pow(b,2) - 4*a*c;

    if(ptr > 0 && a != 0){
        r1 = (-b + (sqrt(pow(b,2) - 4*a*c))) / (2*a);
        r2 = (-b - (sqrt(pow(b,2) - 4*a*c))) / (2*a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);

    }
    else{

        printf("Impossivel calcular\n");
    }



    return 0;

}
