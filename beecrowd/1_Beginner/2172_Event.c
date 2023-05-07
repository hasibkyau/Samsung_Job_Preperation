#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    while(1){
        double A, B;
        scanf("%lf %lf", &A, &B);

        if(A==0 && B==0){
            break;
        }
        double exp = A*B;

        printf("%.0lf\n",exp);
    }
    return 0;
}







