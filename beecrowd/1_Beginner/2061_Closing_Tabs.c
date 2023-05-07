#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int tabs, number_of_actions;
    scanf("%d %d",&tabs, &number_of_actions);

    char action[10];
    for(int i=0; i<number_of_actions; i++){
            scanf("%s", action);
            if(!strcmp(action, "fechou")) tabs=tabs+1;
            else tabs = tabs -1;
    }

    printf("%d\n", tabs);

    return 0;
}




