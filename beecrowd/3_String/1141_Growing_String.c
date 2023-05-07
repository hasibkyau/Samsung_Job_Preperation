#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    while(1)
    {
        int N;
        scanf("%d", &N);

        if(N==0){
            break;
        }

        char lines[N][1000];

        for(int i=0; i<N; i++)
        {
            char temp[1000];
            scanf("%s", temp);

            strcpy(lines[i], temp);
        }

        int count=0, pos=0;
        for(int i=0; i<N; i++)
        {
            printf("%s\n", lines[i]);
            int c=0;
            for(int j=0; j<N; j++){
                if(strstr(lines[i], lines[j])) c++;
                printf("%s  ", lines[j]);
            }
            printf("\n");
            if(c>count){
                count=c;
                pos=i;
            }
        }
        printf("%d %d\n",count, pos+1);
    }


    return 0;
}









