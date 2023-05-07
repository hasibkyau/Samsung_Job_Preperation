#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    char N;
    scanf("%d", &N);

    int previous;
    scanf("%d", &previous);

    int i, x=1;
    for(i=1; i<N; i++){
        int temp;
        scanf("%d", &temp);

        if(temp<previous){
            x=0;
            printf("%d\n",i+1);
            break;
        }
        else{
            previous=temp;
        }
    }
    if(x) printf("0\n");

    return 0;
}






