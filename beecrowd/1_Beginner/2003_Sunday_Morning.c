#include <stdio.h>
#include <math.h>

int main()
{
    char arr[10];
    while(scanf("%s",&arr) != EOF){
        int H = arr[0] - '0';
        int M = arr[2] - '0';
        M = (M*10) + arr[3] -'0';
        M = H*60 + M;

        int res = (M+60) - 480;

        if(res>0){
            printf("Atraso maximo: %d\n",res);
        }
        else{
            printf("Atraso maximo: %d\n",0);
        }
    }

    return 0;
}




