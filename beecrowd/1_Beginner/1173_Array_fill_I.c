#include <stdio.h>
#include <math.h>

int main()
{
    int X[10];
    int Y;
    scanf("%d",&Y);
    for(int i=0; i<10; i++)
    {
        X[i] = Y;
        Y=Y*2;

        printf("N[%d] = %d\n",i,X[i]);
    }

    return 0;
}




