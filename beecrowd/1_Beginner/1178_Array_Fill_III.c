#include <stdio.h>
#include <stdint.h>  // for uint64_t data type

int main()
{
    double x, N[100];
    scanf("%lf", &x);

    for(int i=0; i<100; i++)
    {
       printf("N[%d] = %.4lf\n", i, x);
       x = x/2.0;
    }
    return 0;
}


