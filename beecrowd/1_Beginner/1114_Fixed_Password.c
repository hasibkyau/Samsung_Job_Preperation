#include <stdio.h>
#include <math.h>

int main()
{
    int pass = 2002;
    while(1)
    {
        int x;
        scanf("%d",&x);

        if(x==pass)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }

    }

    return 0;
}


