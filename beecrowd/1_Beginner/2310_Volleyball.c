#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);

    double ServiceRate = 0;
    double BlockRate = 0;
    double AttackRate = 0;

    double TotalServices=0,TotalBlocks=0,TotalAttacks=0;
    double Total_S_Services=0, Total_S_Blocks=0, Total_S_Attacks=0;

    for(int i=0; i<N; i++){
    char name[30];
    double Services,Blocks,Attacks;
    double S_Services, S_Blocks, S_Attacks;

    scanf("%s",name);
    scanf("%lf %lf %lf", &Services, &Blocks, &Attacks);
    scanf("%lf %lf %lf", &S_Services, &S_Blocks, &S_Attacks);


    TotalServices += Services;
    TotalBlocks += Blocks;
    TotalAttacks += Attacks;

    Total_S_Services += S_Services;
    Total_S_Blocks += S_Blocks;
    Total_S_Attacks += S_Attacks;

    }

    ServiceRate = (Total_S_Services*100)/TotalServices;
    BlockRate = (Total_S_Blocks*100)/TotalBlocks;
    AttackRate =(Total_S_Attacks*100)/TotalAttacks;

    printf("Pontos de Saque: %.2lf %%.\n",ServiceRate);
    printf("Pontos de Bloqueio: %.2lf %%.\n",BlockRate);
    printf("Pontos de Ataque: %.2lf %%.\n",AttackRate);

    return 0;
}

