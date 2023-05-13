#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    scanf("%s",str);

    int len = strlen(str);
    if(len>=10) printf("palavrao\n");
    else printf("palavrinha\n");
    return 0;
}

