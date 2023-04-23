#include <stdio.h>
#include <math.h>

int main()
{


    while(1)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if(x==y)
        {
            break;
        }
        else
        {
            if(x>y)
            {
                printf("Decrescente\n");
            }
            else if(x<y)
            {
                printf("Crescente\n");
            }
        }

    }

    return 0;
}

