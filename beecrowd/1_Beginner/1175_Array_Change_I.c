#include <stdio.h>
#include <math.h>

int main()
{
    int A[20];
    int Y;
    for(int i=19; i>=0; i--)
    {
        scanf("%d",&Y);
        A[i] = Y;
    }
    for(int i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i, A[i]);
    }

    return 0;
}





