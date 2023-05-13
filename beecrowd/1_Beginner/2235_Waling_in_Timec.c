#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);

    if(A==B || A==C || B==C) printf("S\n");
    else if(A+B == C || B+C==A || A+C == B) printf("S\n");
    else printf("N\n");
    return 0;
}
