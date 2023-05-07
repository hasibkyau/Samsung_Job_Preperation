#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    while(1)
    {
        int N, num;
        scanf("%d", &N);

        if(N==0)
        {
            break;
        }

        for(int i=0; i<N; i++)
        {
            scanf("%d",&num);
            if(num<3)
            {
                i--;
            }
            else
            {
                if(num%2==0)
                {
                    printf("%d\n", (num*2)-2);
                }
                else
                {
                    printf("%d\n", (num/2)-1);
                }
            }
        }
    }

    return 0;
}








