#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);
    int output[N];
    for(int i=0; i<N; i++){
        int x,y, sum=0;
        scanf("%d %d",&x,&y);

        if(x%2 == 0){
            x=x+1;
        }

        for(int j=0; j<y; j++){
            sum = sum + x;
            x = x+2;
        }
        printf("%d\n",sum);
    }

    return 0;
}

