#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N, res, temp, ans=1;
    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        scanf("%d",&temp);

        if(i==1){
            res=temp;
            ans=1;
        }

        if(res>temp){
            res=temp;
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}

