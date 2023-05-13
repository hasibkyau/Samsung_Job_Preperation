#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    while(1)
    {

        int T;
        scanf("%d", &T);
        if(T==0) break;

        int  N, sum=0;
        for(int i=0; i<T; i++)
        {
            char Food[20];
            scanf("%d %[^\n]", &N, Food);

            if(!strcmp(Food, "suco de laranja")) sum=sum + N*120;
            else if(!strcmp(Food, "morango fresco")) sum=sum + N*85;
            else if(!strcmp(Food, "mamao")) sum=sum + N*85;

            else if(!strcmp(Food, "goiaba vermelha")) sum=sum + N*70;
            else if(!strcmp(Food, "manga")) sum=sum + N*56;

            else if(!strcmp(Food, "laranja")) sum=sum + N*50;
            else if(!strcmp(Food, "brocolis")) sum=sum + N*34;

        }

        if(sum<110) printf("Mais %d mg\n", 110-sum);
        else if(sum>130) printf("Menos %d mg\n", sum - 130);
        else if(sum <= 130 && sum >= 110) printf("%d mg\n",sum);
    }


    return 0;
}






