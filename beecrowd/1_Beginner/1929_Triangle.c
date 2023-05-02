#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);


    if(A < (B + C) || A < (C + D) || A < (B + D))
    {
        printf("Y\n");
        printf("1\n");
    }
    else if(B < (A + C) || B < (C + D) || B < (A + D))
    {
        printf("Y\n");
        printf("2\n");
    }
    else if(C < (A + B) || C < (A + D) || C < (C + D))
    {
        printf("Y\n");
        printf("3\n");
    }
    else if(D < (A + B) || D < (A + C) || D < (B + C))
    {
        printf("Y\n");
        printf("4\n");
    }

    else{
        printf("N\n");
    }

    return 0;
}





