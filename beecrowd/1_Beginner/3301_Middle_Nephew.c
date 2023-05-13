#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int H, Z, L;
        scanf("%d %d %d", &H, &Z, &L);
        int max=H, mid=Z, min=L;

        if(Z>max) max=Z;
        if(L>max) max=L;
        if(min>H) min=H;
        if(min>Z) min=Z;

        mid=(H+Z+L)-(min+max);

        if(mid==H) printf("huguinho\n");
        else if(mid==L) printf("luisinho\n");
        else if(mid==Z) printf("zezinho\n");

    }
    return 0;
}


