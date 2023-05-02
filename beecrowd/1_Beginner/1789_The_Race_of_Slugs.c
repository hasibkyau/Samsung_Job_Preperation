#include <stdio.h>

int main()
{
    int N;
//    scanf("%d", &N);

    while( scanf("%d", &N) !=EOF )
    {
        int speed, level = 0,  max_level = 0;

        for(int i=0; i<N; i++)
        {
            scanf("%d", &speed);

            if(speed < 10 )
            {
                level=1;
            }
            else if(speed >= 10 && speed < 20 )
            {
                level=2;
            }
            else if(speed >= 20)
            {
                level=3;
            }

            if(level > max_level){
                max_level = level;
            }

        }
         printf("%d\n", max_level);
    }

    return 0;
}

