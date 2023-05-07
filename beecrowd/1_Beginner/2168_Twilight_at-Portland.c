
#include <stdio.h>
#include <math.h>
#include <string.h>

double ln(double x) { return log(x); }

int main()
{

    char N;
    scanf("%d", &N);

    int arr[N+1][N+1];

    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            int temp;
            scanf("%d", &temp);
            arr[i][j]=temp;
        }
    }

    int sum;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            sum = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
            if(sum>=2) printf("S");
            else printf("U");
        }
        printf("\n");
    }

    return 0;
}





