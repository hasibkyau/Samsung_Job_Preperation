#include <stdio.h>
#include <math.h>

int main()
{

    while(1)
    {
        int x;
        scanf("%d",&x);

        if(x==0)
        {
            break;
        }
        else
        {
            int i;
            for(i=1; i<x; i++)
            {
                printf("%d ",i);
            }
            printf("%d\n",i);
        }
    }

    return 0;
}






