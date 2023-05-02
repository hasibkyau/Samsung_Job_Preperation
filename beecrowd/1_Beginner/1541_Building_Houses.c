#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, res;
//    scanf("%d", &N);

    while( 1 )
    {
        scanf("%d", &A);
        if(A==0){
            break;
        }
        scanf("%d", &B);
        scanf("%d", &C);

        res = (A*B*100)/C;
        res = sqrt(res);

        printf("%d\n", res);

    }

    return 0;
}

