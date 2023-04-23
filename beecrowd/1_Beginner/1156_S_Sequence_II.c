#include <stdio.h>
#include <math.h>

int main()
{
    float N, sum=1, count=0, j=1.0;

    for(int i=3; i<=37; i++){
        j=j*2.0;
        sum = sum + (i/j);
        i++;

    }
    printf("%.2f\n", sum);

    return 0;
}
