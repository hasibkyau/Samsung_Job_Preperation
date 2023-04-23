#include <stdio.h>
#include <math.h>

int main()
{
    int N, in=0, out=0, temp;
    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&temp);
        if(temp>=10 && temp<=20){
            in++;
        }
        else{
            out++;
        }
    }

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}


