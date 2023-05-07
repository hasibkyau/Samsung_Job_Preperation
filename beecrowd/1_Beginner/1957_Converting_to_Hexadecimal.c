#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    int N;
    scanf("%d", &N);
    int i;
    for(i=28; i>0; i-=4){
        if((N>>i)&15) break;
    }
    for(; i>=0; i-=4){
        int digit=(N>>i)&15;

        if(digit < 10){
            printf("%d",digit);
        }
        else{
            printf("%c", digit+55);
        }
    }
    printf("\n");
    return 0;
}



