#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    for(int i=0; i<3; i++)
    {

        char scream[10] = "caw";

        int sum=0;

        while(1)
        {
            char input[20];
//            scanf("%[^\n]",input);
//            scanf("%s",input);
            gets(input);
            if(!strcmp(input, scream))
            {
                printf("%d\n",sum);
                break;
            }

            else
            {

                if(!strcmp(input,"---"))
                {
                    sum = sum+0;
                }

                else if(!strcmp(input,"--*"))
                {
                    sum=sum+1;
                }
                else if(!strcmp(input,"-*-"))
                {
                    sum=sum+2;
                }

                else if(!strcmp(input,"-**"))
                {
                    sum=sum+3;
                }

                else if(!strcmp(input,"*--"))
                {
                    sum=sum+4;
                }

                else if(!strcmp(input,"*-*"))
                {
                    sum=sum+5;
                }

                else if(!strcmp(input,"**-"))
                {
                    sum=sum+6;
                }
                else if(!strcmp(input,"***"))
                {
                    sum=sum+7;
                }
            }


        }
    }
    return 0;
}
