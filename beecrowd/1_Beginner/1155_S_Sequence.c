#include <stdio.h>
#include <math.h>

int main()
{
    float N, sum=0, count=0;

    for(int i=1; i<=100; i++){
        sum = sum + (1.0/i);
    }
    printf("%.2f\n", sum);

    return 0;
}











