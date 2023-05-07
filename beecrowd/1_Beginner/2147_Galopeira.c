#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    int N;
    scanf("%d",&N);

    char name[10000];
    double len;
    double res;

    for(int i=0; i<N; i++){
        scanf("%s",name);
        len = strlen(name);
        res = len/100.0;

        printf("%.2lf\n",res);
    }

    return 0;
}

