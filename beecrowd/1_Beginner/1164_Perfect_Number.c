#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int x, sum=0;
        scanf("%d",&x);

        for(int j=1; j<x; j++){
            if(x%j==0){
                sum = sum + j;
            }
        }
        if(sum==x){
            printf("%d eh perfeito\n",x);
        }
        else{
            printf("%d nao eh perfeito\n",x);
        }
    }

    return 0;
}



