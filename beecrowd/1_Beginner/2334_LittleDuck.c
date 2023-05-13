#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    while(1)
    {
        char N[30];
        scanf("%s", N);

        if(!strcmp(N, "-1")) break;
        else if(!strcmp(N, "0")) printf("0\n");
        else if(!strcmp(N, "1")) printf("0\n");
        else
        {
            int len = strlen(N);
            for(int i=len-1; i>=0; i--)
            {
                int temp=N[i]-'0';
                if(temp == 0){
                    temp = '9';
                    N[i] = (char) temp;
                }
                else{
                    temp = temp-1;
                    temp = temp + '0';
                    N[i]=(char) temp;
                    break;
                }
            }


            for(int i=0; i<len; i++){
                if(i==0 && N[i]-'0' == 0) printf("");
                else printf("%c", N[i]);

            }
            printf("\n");

        }
    }
    return 0;
}




