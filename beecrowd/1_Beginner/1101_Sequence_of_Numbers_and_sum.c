#include <stdio.h>
#include <math.h>

int main()
{

    int i=0;
    while(1)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if(x<=0 || y<=0)
        {
            break;
        }
        else
        {
            if(x>y)
            {
                int temp = x;
                x = y;
                y = temp;
            }

            int sum=0;
            for(int j=x; j<=y; j++)
            {
                    sum += j;
                    printf("%d ", j);
            }
            printf("Sum=%d\n",sum);
        }

    }

    return 0;
}
