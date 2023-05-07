#include <stdio.h>

int main()
{
    while(1)
    {
        int N;
        scanf("%d", &N);
        if(N==0)
        {
            break;
        }
        int M=N/2;

        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=N; j++)
            {
                if(i<=M && j>=i && j<=N+1-i) printf("%3d",i);
                else if(i>=M && j<=i && j>N-i) printf("%3d",N+1-i);
                else if(j<=M && j<i && j<=N-i) printf("%3d",j);
                else if(j>M && j>i && j>N+1-i) printf("%3d",N+1-j);

                if(j!=N) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
