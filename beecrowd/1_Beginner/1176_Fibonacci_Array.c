#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        int64_t i=1, X, A=0, B=1, temp;
        scanf("%d", &X);

        if(X==0)
        {
            printf("Fib(0) = 0\n");

        }
        else if(X == 1)
        {
            printf("Fib(1) = 1\n");
        }
        else if(X==2)
        {
            printf("Fib(2) = 1\n");
        }
        else if(X>2)
        {

            for(int i=3; i<=X; i++)
            {
//                printf("%d ",A+B);
                temp = A;
                A=B;
                B=temp+B;
            }
             printf("Fib(%llu) = %llu\n", X, A+B);
        }



    }


    return 0;
}








