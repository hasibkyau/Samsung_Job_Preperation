#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    int N, H, M, D;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        scanf("%d %d %d", &H, &M, &D);

        if(H>9) printf("%d:",H);
        else printf("0%d:",H);

        if(M>9) printf("%d",M);
        else printf("0%d",M);

        if(D==1) printf(" - A porta abriu!\n");
        else printf(" - A porta fechou!\n");
    }

    return 0;
}


