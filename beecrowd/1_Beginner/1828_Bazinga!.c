#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int N;
    char sheldon[20], raj[20];

    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%s", sheldon);
        scanf("%s", raj);

        printf("Caso #%d: ",i+1);

        if(!strcmp(sheldon, raj))
        {
            printf("De novo!\n");
        }
        else
        {
            if(!strcmp(sheldon, "tesoura") && (!strcmp(raj, "lagarto") || !strcmp(raj, "papel")))
            {
                printf("Bazinga!\n");
            }
            else if(!strcmp(sheldon, "papel") && (!strcmp(raj, "pedra") || !strcmp(raj, "Spock")))
            {
                printf("Bazinga!\n");
            }
            else if(!strcmp(sheldon, "pedra") && (!strcmp(raj, "lagarto") || !strcmp(raj, "tesoura")))
            {
                printf("Bazinga!\n");
            }

            else if(!strcmp(sheldon, "lagarto") && (!strcmp(raj, "Spock") || !strcmp(raj, "papel")))
            {
                printf("Bazinga!\n");
            }

            else if(!strcmp(sheldon, "Spock") && (!strcmp(raj, "tesoura") || !strcmp(raj, "pedra")))
            {
                printf("Bazinga!\n");
            }

            else
            {
                printf("Raj trapaceou!\n");
            }
        }
    }

    return 0;
}
