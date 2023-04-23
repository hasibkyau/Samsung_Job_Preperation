#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int t[N];


    for(int i=0; i<N; i++)
    {
        int PA, PB;
        double G1, G2;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        int temp;
        int x=0;

        while(PA <= PB)
        {
            temp = (PA*G1)/100;
            PA = PA + temp;

            temp = (PB*G2)/100;
            PB = PB + temp;

            x++;
            if(x>100)
            {
                break;
            }
        }
        t[i] = x;
    }

    for(int i=0; i<N; i++){
        if(t[i]>100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n", t[i]);
        }
    }


    return 0;
}
