#include <stdio.h>
#include <stdint.h>  // for uint64_t data type

int main()
{
    double M[12][12], sum = 0.0, avg;
    int c=0;
    char Cal;
    scanf("%c", &Cal);

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            double temp;
            scanf("%lf", &temp);
            M[i][j] = temp;
        }
    }


    for(int i=0; i<12; i++)
    {
        for(int j=i; j<12; j++){
            sum = sum + M[i][j];
        }
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







