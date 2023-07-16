#include <stdio.h>
#include <string.h>



int main()
{

    int T;
    scanf("%d",&T);

    for(int i=0; i<T; i++)
    {
        if(T<1)break;

        int ball=0;
        char str[101];

        gets(str);
//        scanf("%d",&ball);
        int len = strlen(str);

        for(int i=0; i<len; i++)
        {
            if((str[i]>='0' && str[i]<='6') || str[i]=='O')
            {
                ball++;
            }
        }

        int over=ball/6;
        ball = ball%6;

        printf("%d OVER %d BALL",over, ball);
    }

    return 0;
}
