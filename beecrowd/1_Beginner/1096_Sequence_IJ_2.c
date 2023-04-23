#include <stdio.h>
#include <math.h>

int main()
{
    int I=1;
    for(int i=1; i<=5; i++){
        int J=7;
        printf("I=%d J=%d\n",I,J--);
        printf("I=%d J=%d\n",I,J--);
        printf("I=%d J=%d\n",I,J);

        I=I+2;
    }
    return 0;
}




