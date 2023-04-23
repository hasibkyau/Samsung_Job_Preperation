#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        int x, y, flag=1;;
        scanf("%d",&x);

        if(x<=2 && x>=1)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            y=(x/2)+1;
            for(int j=2; j<=y; j++)
            {
                if(x%j==0)
                {
                    printf("%d nao eh primo\n",x);
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%d eh primo\n",x);
            }
        }
    }

    return 0;
}




