#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);


    for(int i=0; i<N; i++)
    {
        char name[30];
        int force;
        scanf("%s %d", name, &force);
        if(!strcmp(name, "Thor"))
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}


