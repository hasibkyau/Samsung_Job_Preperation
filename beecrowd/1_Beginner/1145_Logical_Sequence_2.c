#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, flag=1;
    scanf("%d %d",&x, &y);

    for(int i=1; i<=y; i++)
    {
        for(int j=1; j<x; j++)
        {
            if(i>=y)
            {
                flag=0;
                break;
            }
            else{
                printf("%d ",i);
            }
            i++;
        }
        printf("%d\n",i);

    }

    return 0;
}





