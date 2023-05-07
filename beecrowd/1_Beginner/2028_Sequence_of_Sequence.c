#include <stdio.h>
#include <math.h>

int main()
{
    int N,count=1;
    int caso =1;

    while(scanf("%d", &N) != EOF)
    {
        for(int i=0; i<=N; i++)
        {
            count=count+i;
        }


        if(N==0) {
            printf("Caso %d: 1 numero\n",caso);
        }
        else {
            printf("Caso %d: %d numeros\n", caso, count);
        }
        printf("%d",0);

        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=i; j++)
            {
                printf(" %d",i);
            }
        }
        printf("\n\n");

        caso++;
        count=1;
    }


    return 0;
}
