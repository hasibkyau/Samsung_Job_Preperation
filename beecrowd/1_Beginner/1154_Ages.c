#include <stdio.h>
#include <math.h>

int main()
{
    float N, sum=0, count=0;

    while(1){
        scanf("%f", &N);
        if(N>=0){
            sum = sum + N;
            count++;
        }
        else{
            break;
        }
    }

    printf("%.2f\n", sum/count);

    return 0;
}










