#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);

    int B=0, A=0, M=0, D=0;

    for(int i=0; i<N; i++){
        char E[20], G[20];
        int H;
        scanf("%s %s %d", E, G, &H);
        if(!strcmp(G, "bonecos")) B=B+H;
        else if(!strcmp(G, "arquitetos")) A=A+H;
        else if(!strcmp(G, "musicos")) M=M+H;
        else if(!strcmp(G, "desenhistas")) D=D+H;
    }
//    printf("A=%d, B=%d, M=%d, D=%d\n", A, B, M, D);
    int sum=0;
    sum = (B/8)+(A/4)+(M/6)+(D/12);

    printf("%d\n", sum);
    return 0;
}

