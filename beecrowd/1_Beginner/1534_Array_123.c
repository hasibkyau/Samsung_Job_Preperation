#include <stdio.h>

int main()
{
    int N;
//    scanf("%d", &N);
    int arr[N];

    while( scanf("%d", &N) !=EOF )
    {

        for(int i=1; i<=N; i++)
        {
            int two = N-i;
            int one = i-1;
            for(int j=0; j<N; j++)
            {
                if(j == two ){
                    printf("%d",2);
                }
                else if(j == one){
                    printf("%d",1);
                }
                else{
                    printf("%d",3);
                }
            }
            printf("\n");

        }
    }

    return 0;
}

