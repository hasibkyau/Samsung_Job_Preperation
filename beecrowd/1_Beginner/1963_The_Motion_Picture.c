#include <stdio.h>
#include <math.h>

int main()
{
    double A, B;
    scanf("%lf %lf", &A, &B);

    double diff = B - A;
    double res = (diff*100)/A;
    printf("%.2lf%%\n",res);

    return 0;
}




