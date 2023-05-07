#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int positive,player_1, player_2, cheating, accused;
    scanf("%d %d %d %d %d",&positive, &player_1, &player_2, &cheating, &accused);

    if(!cheating){
        if(accused) printf("Jogador 1 ganha!\n");
        else if((player_1+player_2)%2 == 0){
            if(positive) printf("Jogador 1 ganha!\n");
            else printf("Jogador 2 ganha!\n");
        }
        else{
            if(!positive) printf("Jogador 1 ganha!\n");
            else printf("Jogador 2 ganha!\n");
        }
    }
    else if(cheating){
        if(!accused) printf("Jogador 1 ganha!\n");
        else if(accused) printf("Jogador 2 ganha!\n");

    }

    return 0;
}



