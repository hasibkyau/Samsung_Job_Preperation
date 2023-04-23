#include <stdio.h>
#include <math.h>

int main()
{
    int N, x=1;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        printf("%d ",x++);
        printf("%d ",x++);
        printf("%d PUM\n",x++);
        x++;
        }

    return 0;
}

