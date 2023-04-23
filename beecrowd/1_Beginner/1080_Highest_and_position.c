#include <stdio.h>
#include <math.h>

int main()
{
    int N = 100;
    int max = 0;
    int pos = 0;
    int temp = 0;

    for(int i=0; i<N; i++)
    {
        scanf("%d",&temp);
        if(temp>max){
            max = temp;
            pos = i+1;
        }
    }

    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
}

