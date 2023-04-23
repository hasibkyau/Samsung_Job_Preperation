#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x%2==0){
      x=x+1;
    }


    for(int i=0; i<6; i++)
    {
        printf("%d\n", x);
        x=x+2;
    }

    return 0;
}


