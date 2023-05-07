#include <stdio.h>
#include <math.h>
#include <string.h>

double ln(double x) { return log(x); }

int main()
{

    double n, res;
    scanf("%lf",&n);

    res=ln(n);
    res=n/res;

    printf("%.1lf ",res);
    printf("%.1lf\n", res*1.25506);

    return 0;
}



