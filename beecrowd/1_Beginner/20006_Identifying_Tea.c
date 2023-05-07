#include <stdio.h>
#include <math.h>

int main()
{
    int N, count=0;
    scanf("%d", &N);

    for(int i=0; i<5; i++){
        int temp;
        scanf("%d",&temp);

        if(temp==N){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}





