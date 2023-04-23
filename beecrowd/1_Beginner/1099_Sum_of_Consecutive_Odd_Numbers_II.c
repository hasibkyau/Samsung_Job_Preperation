#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);
    int output[N];
    for(int i=0; i<N; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y){
            int temp = x;
            x = y;
            y = temp;
        }
        int sum=0;
        for(int j=x+1; j<y; j++){
            if(j%2 != 0){
                sum += j;
            }
        }
        output[i]=sum;
    }

    for(int i=0; i<N; i++){
        printf("%d\n",output[i]);
    }

    return 0;
}
