#include <stdio.h>
#include <math.h>

int main()
{
    int N, x=1;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        printf("%d %d %d\n",i, i*i, i*i*i);
        }

    return 0;
}
