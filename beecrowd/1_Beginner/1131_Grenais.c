#include <stdio.h>
#include <math.h>

int main()
{
    int count=0;
    int matches=1, Inter=0, Gremio=0, Empates=0;
    while(1)
    {
        int x,y,flag=1;
        scanf("%d %d",&x,&y);

        if(x>y)
        {
            Inter++;
        }
        else if(x<y)
        {
            Gremio++;
        }
        else if(x==y)
        {
            Empates++;
        }

        while(1)
        {
            int n;
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &n);
            if(n==1)
            {
                matches++;
                break;
            }
            else if(n==2)
            {
                flag=0;
                break;
            }
        }

        if(flag==0){
            printf("%d grenais\n",matches);
            printf("Inter:%d\n",Inter);
            printf("Gremio:%d\n",Gremio);
            printf("Empates:%d\n", Empates);
            if(Inter==Gremio){
                printf("Não houve vencedor\n");
            }
            if(Inter>Gremio){
                printf("Inter venceu mais\n");
            }
            if(Inter<Gremio){
                printf("Gremio venceu mais\n");
            }
            flag=0;
            break;
        }
    }

    return 0;
}


