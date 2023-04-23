#include <stdio.h>
#include <math.h>

int main()
{
    int X, Z, sum=0, count=0;
    scanf("%d", &X);
    while(1){
        scanf("%d", &Z);
        if(Z>X){
            break;
        }
    }

    for(int i=X; i<=Z; i++)
    {
        sum = sum + i;
        count++;
        if(sum>Z){
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}







