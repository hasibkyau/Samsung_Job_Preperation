#include <stdio.h>
#include <math.h>

int main()
{
    int C = 0;
    int R = 0;
    int S = 0;

    char type;
    int amount = 0, totalAnimal = 0;

    int myNum;
    scanf("%d", &myNum);
//    printf("%d",myNum);


    for(int i=0; i<myNum; i++)
    {
        scanf("%d %c",&amount, &type);
        totalAnimal = totalAnimal + amount;
        if(type == 'C')
        {
            C = C + amount;
        }
        else if(type == 'R')
        {
            R = R + amount;
        }
        else if(type == 'S')
        {
            S = S + amount;
        }

    }

    printf("Total: %d cobaias\n",totalAnimal);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);

    float avg = (C*100.00)/totalAnimal;
    printf("Percentual de coelhos: %.2f %%\n", avg);
    avg = (R*100.00)/totalAnimal;
    printf("Percentual de ratos: %.2f %%\n",avg);
    avg = (S*100.00)/totalAnimal;
    printf("Percentual de sapos: %.2f %%\n",avg);

    return 0;
}


