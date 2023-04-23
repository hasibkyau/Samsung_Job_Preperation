#include <stdio.h>
#include <math.h>

int main()
{
    while(1){
        int x, sum=0;
        scanf("%d",&x);

        if(x==0){
            break;
        }

        if(x%2 != 0){
            x=x+1;
        }

        for(int j=0; j<5; j++){
            sum = sum + x;
            x = x+2;
        }
        printf("%d\n",sum);
    }

    return 0;
}


