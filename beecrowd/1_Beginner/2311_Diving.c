#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);


    for(int i=0; i<N; i++)
    {
        char name[30];
        double degree,score, res;

        scanf("%s %lf", name, &degree);
        scanf("%lf", &score);

        double sum=score;

        double min=score, max=score;


        for(int j=1; j<7; j++)
        {
            double temp;
            scanf("%lf", &temp);
            sum = sum + temp;
            if(max<temp) max=temp;
            if(min>temp) min=temp;
        }


        res = sum - (min+max);

        res = res*degree;
        printf("%s %.2lf\n",name,res);
    }

    return 0;
}


