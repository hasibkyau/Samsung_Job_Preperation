#include <stdio.h>
#include <math.h>

int main()
{

    int even = 0, odd = 0, positive=0, negative=0, x;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &x);
        if(abs(x)%2 == 0){
            even++;
        }
        if(abs(x)%2 != 0){
            odd++;
        }
        if(x > 0){
            positive++;
        }
        if(x < 0){
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}

