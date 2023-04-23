#include <stdio.h>
#include <math.h>

int main()
{


    while(1)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if(x==0 || y==0)
        {
            break;
        }
        else
        {
            if(x>0)
            {
                if(y>0){
                    printf("primeiro\n");
                }
                else{
                    printf("quarto\n");
                }

            }
            else if(x<0)
            {
                if(y>0){
                   printf("segundo\n");
                }
                else{
                    printf("terceiro\n");
                }

            }
        }

    }

    return 0;
}

