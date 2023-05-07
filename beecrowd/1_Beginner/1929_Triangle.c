#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);


    if(A < (B + C) && B < (A + C) && C < (A + B))
    {
        printf("S\n");
//        printf("1\n");
    }
    else if(A < (B + D) && B < (A + D) && D < (A + B))
    {
        printf("S\n");
//        printf("2\n");

    }
    else if(A < (C + D) && C < (A + D) && D < (A + C))
    {
        printf("S\n");
//        printf("3\n");
    }
    else if(B < (C + D) && C < (B + D) && D < (B + C))
    {
        printf("S\n");
//        printf("4\n");
    }

    else{
        printf("N\n");
    }

    return 0;
}





