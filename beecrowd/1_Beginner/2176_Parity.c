#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char num[100];
    scanf("%s", num);

    int len=strlen(num);

    int one=0;
    for(int i=0; i<len; i++){
        if(num[i] == '1') one++;
        printf("%c", num[i]);
    }

    if(one%2==0) printf("0\n");
    else printf("1\n");
    return 0;
}








