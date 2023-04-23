#include <stdio.h>
#include <math.h>

int main()
{
    int x, Alcohol=0, Gasoline=0, Desel=0, flag=1;
    while(1)
    {
        scanf("%d",&x);

        switch(x)
        {
        case 1:
            Alcohol++;
            break;
        case 2:
            Gasoline++;
            break;
        case 3:
            Desel++;
            break;
        case 4:
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", Alcohol);
            printf("Gasolina: %d\n", Gasoline);
            printf("Diesel: %d\n", Desel);

            flag=0;
            break;
        }


        if(flag==0)
        {
            break;
        }
    }

    return 0;
}
