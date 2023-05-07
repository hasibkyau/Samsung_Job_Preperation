#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);

    int A, B;
    double sum=0;

    for(int i=0; i<N; i++){
        scanf("%d %d", &A, &B);

        if(A==1001) sum= sum+(B*1.5);
        else if(A==1002) sum = sum + (B*2.5);
        else if(A==1003) sum = sum + (B*3.5);
        else if(A==1004) sum = sum + (B*4.5);
        else if(A==1005) sum = sum + (B*5.5);
    }

    printf("%.2lf\n", sum);

    return 0;
}



