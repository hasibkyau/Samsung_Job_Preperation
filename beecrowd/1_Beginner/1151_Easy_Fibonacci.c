#include <stdio.h>
#include <math.h>

int main()
{
    int i=1, X, A=0, B=1, temp;

    scanf("%d", &X);
    if(X==0)
    {

    }
    else if(X == 1)
    {
        printf("%d ",A);
    }
    else if(X==2)
    {
        printf("%d ",A);
        printf("%d ",B);
    }
    else if(X>2)
    {
        printf("%d ",A);
        printf("%d ",B);

        for(int i=3; i<X; i++)
        {
            printf("%d ",A+B);
            temp = A;
            A=B;
            B=temp+B;
        }
        printf("%d\n",A+B);
    }






    return 0;
}








