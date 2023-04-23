#include <stdio.h>
#include <math.h>

int main()
{

    int count = 0, x;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &x);
        if(abs(x)%2 == 0){
            count++;
        }
    }
    printf("%d valores pares\n", count);

    return 0;
}

