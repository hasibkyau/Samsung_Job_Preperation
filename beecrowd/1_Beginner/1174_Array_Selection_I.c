#include <stdio.h>
#include <math.h>

int main()
{
    int A[100];
    float Y;
    for(int i=0; i<100; i++)
    {
        scanf("%f",&Y);
        A[i] = Y;
        if(Y <= 10)
        {
            printf("A[%d] = %.1f\n",i,Y);
        }

    }

    return 0;
}




