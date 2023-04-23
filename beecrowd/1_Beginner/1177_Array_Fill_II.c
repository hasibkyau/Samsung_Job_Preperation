#include <stdio.h>
#include <stdint.h>  // for uint64_t data type

int main()
{
    int x, N[1000];
    scanf("%d", &x);

    for(int i=0; i<1000;)
    {
        for(int j=0; j<x; j++)
        {
            if(i<1000)
            {
                printf("N[%d] = %d\n", i, j);
                i++;
            }
        }
    }
    return 0;
}

