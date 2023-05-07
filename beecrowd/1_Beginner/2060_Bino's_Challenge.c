#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d",&N);

    int two=0, three=0, four=0, five=0;
    for(int i=0; i<N; i++){
        int temp;
        scanf("%d",&temp);
        if(temp%2==0) two++;
        if(temp%3==0) three++;
        if(temp%4==0) four++;
        if(temp%5==0) five++;
    }

    printf("%d Multiplo(s) de 2\n", two);
    printf("%d Multiplo(s) de 3\n", three);
    printf("%d Multiplo(s) de 4\n", four);
    printf("%d Multiplo(s) de 5\n", five);

    return 0;
}




