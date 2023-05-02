#include <stdio.h>

int main()
{
    int N, R1, R2, res;
    scanf("%d", &N);


    for(int i=0; i<N; i++){
        scanf("%d", &R1);
        scanf("%d", &R2);

        res = R1 + R2;
        printf("%d\n",res);
    }

    return 0;
}

