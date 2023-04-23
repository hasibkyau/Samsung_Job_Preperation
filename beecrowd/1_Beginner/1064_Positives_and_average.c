#include <stdio.h>
int main()
{

    int count = 0;
    float sum =0;
    float X[6];
    for(int i=0; i<6; i++)
    {
        scanf("%f", &X[i]);
    }

    for(int i=0; i<6; i++)
    {
        if(X[i] > 0.00){
            count++;
            sum += X[i];
        }
//        printf("%f", X[i]);
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum/count);


    return 0;
}
