#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int A, B, C, X, Y;
    scanf("%d %d %d",&A, &B, &C);

    X = B-A;
    Y=C-B;

    if(B-A < 0)
    {
        if(C-B <= B-A)
        {
            printf(":(\n");
        }
        else
        {
            printf(":)\n");
        }

    }
    else if(B-A > 0)
    {
        if(C-B >= B-A)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        };
    }
    else if(B-A == 0)
    {
        if(C-B > 0)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }

    }


    return 0;
}
