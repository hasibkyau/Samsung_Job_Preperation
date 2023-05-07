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

        for(int i=0; i<N; i++)
        {
            int temp=flag;
            for(int j=0; j<N; j++)
            {
                matrix[i][j]=temp;
                temp=temp*2;
            }
            flag=flag*2;
        }

        int T = matrix[N-1][N-1];
        int nDigits = 0;

        while (T > 0) {
            T /= 10;
            nDigits++;
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                printf("%*d",nDigits, matrix[i][j]);
                if(j!=N-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}

