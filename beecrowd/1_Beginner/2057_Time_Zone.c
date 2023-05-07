#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A, &B, &C);

    int res = A+B+C;
    res = res%24;

    if(res<0){
        printf("%d\n",24+res);
    }
    else{
        printf("%d\n",res);
    }

    return 0;
}


