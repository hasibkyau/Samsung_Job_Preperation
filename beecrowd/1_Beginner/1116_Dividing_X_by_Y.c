#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        float x,y;
        scanf("%f %f",&x,&y);

        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", x/y);
        }

    }

    return 0;
}


