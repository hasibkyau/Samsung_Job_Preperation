#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);

    float A;
    float B;
    float C;
    float output[N];

    for(int i=0; i<N; i++)
    {
        float avg=0.0;

        scanf("%f",&A);
        scanf("%f",&B);
        scanf("%f",&C);

        avg = ((A*2) + (B*3) + (C*5))/10;
        output[i]=avg;
    }

    for(int i=0; i<N; i++){
        printf("%.1f\n",output[i]);
    }
    return 0;
}

