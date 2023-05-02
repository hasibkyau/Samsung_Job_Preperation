#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);


    for(int i=0; i<N; i++)
    {
        int force;
        scanf("%d", &force);
        if(force%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}



