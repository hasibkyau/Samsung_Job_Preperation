#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{

    int N,M;
    scanf("%d %d", &N, &M);

    int arr[N][M];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i][j]=temp;
        }
    }

    int flag=1;

    for(int i=1; i<N-1; i++)
    {
        for(int j=1; j<M-1; j++)
        {
            if(arr[i][j]==42){
                if(arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i+1][j+1]==7  && arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i-1][j+1]==7  && arr[i-1][j-1]==7 && arr[i-1][j]==7){
                    flag=0;
                    printf("%d %d\n",i+1, j+1);
                    break;
                }
            }
        }
    }
    if(flag) printf("0 0\n");
    return 0;
}






