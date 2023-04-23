#include <stdio.h>
#include <math.h>

int main()
{
    int N, factorial=0;

    scanf("%d", &N);
    factorial = N;

    for(int i=N-1; i>0; i--)
    {
        factorial= factorial * (i);
    }
    printf("%d\n",factorial);

    return 0;
}









