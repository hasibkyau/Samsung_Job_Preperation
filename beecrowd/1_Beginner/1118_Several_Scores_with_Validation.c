#include <stdio.h>
#include <math.h>

int main()
{
    int count=0, flag=1;
    float avg, A[2]= {0.0, 0.0};

    while(flag=1)
    {
        float x;
        scanf("%f",&x);

        if(x>=0 && x<=10)
        {
            A[count] = x;
            count++;

            if(count==2)
            {
                printf("media = %.2f\n", (A[0]+A[1])/2);

                int n=0;
                while(n!=1 || n!=2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &n);
                    if(n==1)
                    {
                        count=0;
                        break;
                    }
                    else if(n==2)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }


            }

        }
        else
        {
            printf("nota invalida\n");
        }
    }

    return 0;
}

