#include <stdio.h>
#include <math.h>

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

        int matrix[N][N];
        int flag=1;


        for(int i=1; i<=N; i++){
            for(int j=1; j<=N; j++){
                if(j<i){ printf("%3d",i+1-j);}
                else if(j>-i){ printf("%3d", j-i+1);}


                if(j!=N) printf(" ");
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}


