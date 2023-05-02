#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);


    for(int i=0; i<N; i++)
    {
        char p1[100], p2[100], choice1[10], choice2[10];
        int val1, val2;
        scanf("%s %s %s %s", p1, choice1, p2, choice2);
        scanf("%d %d", &val1, &val2);

        if((val1+val2)%2==0)
        {
            if(!strcmp(choice1,"PAR"))
            {
                printf("%s\n",p1);
            }
            else
            {
                printf("%s\n",p2);
            }

        }
        else
        {
            if(!strcmp(choice1,"IMPAR"))
            {
                printf("%s\n",p1);
            }
            else
            {
                printf("%s\n",p2);
            }
        }
    }
    return 0;
}




