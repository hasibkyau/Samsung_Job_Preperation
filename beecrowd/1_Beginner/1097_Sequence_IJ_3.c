#include <stdio.h>
#include <math.h>

int main()
{
    int I=1;
    int J=7;

    for(int i=1; i<=5; i++){
        printf("I=%d J=%d\n",I,J-0);
        printf("I=%d J=%d\n",I,J-1);
        printf("I=%d J=%d\n",I,J-2);
        I=I+2;
        J=J+2;
    }
    return 0;
}





