#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        char P1[10], P2[10];
        scanf("%s %s",P1, P2);

        if(!strcmp(P1, P2)){
            if(!strcmp(P1, "ataque")) printf("Aniquilacao mutua\n");
            else if(!strcmp(P1, "pedra")) printf("Sem ganhador\n");
            else if(!strcmp(P1, "papel")) printf("Ambos venceram\n");
        }
        else if(!strcmp(P1, "ataque") && !strcmp(P2, "pedra")) printf("Jogador 1 venceu\n");
        else if(!strcmp(P2, "ataque") && !strcmp(P1, "pedra")) printf("Jogador 2 venceu\n");

        else if(!strcmp(P1, "pedra") && !strcmp(P2, "papel")) printf("Jogador 1 venceu\n");
        else if(!strcmp(P2, "pedra") && !strcmp(P1, "papel")) printf("Jogador 2 venceu\n");

        else if(!strcmp(P1, "papel") && !strcmp(P2, "ataque")) printf("Jogador 2 venceu\n");
        else if(!strcmp(P2, "papel") && !strcmp(P1, "ataque")) printf("Jogador 1 venceu\n");
    }

    return 0;
}

