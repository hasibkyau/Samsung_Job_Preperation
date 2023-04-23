#include <stdio.h>
#include <stdint.h>  // for uint64_t data type

int main()
{
    double M[12][12], sum = 0.0, avg;
    int L;
    char Cal;
    scanf("%d %c", &L, &Cal);

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            double temp;
            scanf("%lf", &temp);
            M[i][j] = temp;
        }
    }


    for(int j=0; j<12; j++)
    {
        sum = sum + M[L][j];
    }


    if(Cal=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(Cal='M'){
        printf("%.1lf\n",sum/12.0);
    }

    return 0;
}





