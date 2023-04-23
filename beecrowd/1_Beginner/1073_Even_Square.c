#include <stdio.h>
#include <math.h>

int main()
{
    int N,temp;
    scanf("%d", &N);

    for(int i=2; i<=N; i++)
    {
        if(i%2 == 0){
           temp = i*i;
           printf("%d^%d = %d\n",i, 2, temp);
        }
    }
    return 0;
}



