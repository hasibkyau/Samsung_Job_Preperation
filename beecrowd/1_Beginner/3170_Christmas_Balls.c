#include <stdio.h>
#include <string.h>

int main(){
    int B, G;
    scanf("%d %d", &B, &G);

    if(B < G/2)printf("Faltam %d bolinha(s)\n", G/2-B);
    else printf("Amelia tem todas bolinhas!\n");
    return 0;
}


