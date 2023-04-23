#include <stdio.h>
#include <math.h>

int main()
{
    int J = 60;
    int I = 1;
    for(int i=0; i<=12; i++){
        printf("I=%d J=%d\n",I,J);
        J=J-5;
        I = I+3;
    }
    return 0;
}



