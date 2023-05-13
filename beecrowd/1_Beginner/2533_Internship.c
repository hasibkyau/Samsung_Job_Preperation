#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int M;
    while(scanf("%d", &M) != EOF)
    {
        double sum=0;
        double sum_c=0;
        double N, C;
        for(int i=0; i<M; i++)
        {
            int index;
            scanf("%lf %lf", &N, &C);
            sum = sum + N*C;
            sum_c = sum_c+C;
        }

        double res=sum/(sum_c*100);
        printf("%.4lf\n",res);
    }
    return 0;
}



