#include <stdio.h>
#include <math.h>

int main()
{
    float I=0.0;

    for(int i=0; i<=10; i++)
    {
        int int_part = I;
        float frac_part=I-int_part;
        if (frac_part > 0.0 && i!=10)
        {

            printf("I=%.1f J=%.1f\n",I,1+I);
            printf("I=%.1f J=%.1f\n",I,2+I);
            printf("I=%.1f J=%.1f\n",I,3+I);
        }
        else
        {
            int K=I;
            printf("I=%d J=%d\n",K,1+K);
            printf("I=%d J=%d\n",K,2+K);
            printf("I=%d J=%d\n",K,3+K);
        }

        I=I+0.2;
    }
    return 0;
}






