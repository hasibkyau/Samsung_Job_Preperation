#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int N,M;
    while(scanf("%d %d", &N, &M)!=EOF)
    {
        int arr[N+2][M+2];
        for(int i=0; i<=N+1; i++){
            for(int j=0; j<=M+1; j++){
                if(i==0 || i==N+1 || j==0 || j==M+1){
                    arr[i][j]=0;
                }
                else{
                 int temp;
                 scanf("%d", &temp);
                 arr[i][j]=temp;
                }
            }
        }

//        //Print full array
//        for(int i=0; i<=N+1; i++){
//            for(int j=0; j<=M+1; j++){
//                printf("%d ",arr[i][j]);
//            }
//            printf("\n");
//        }


        for(int i=1; i<=N; i++){
            for(int j=1; j<=M; j++){
                if(arr[i][j]==1) printf("9");
                else{
                    int sum=0;
                    sum=arr[i][j+1] + arr[i][j-1] + arr[i+1][j] + arr[i-1][j];
                    printf("%d",sum);
                }
            }
            printf("\n");
        }

    }
    return 0;
}
