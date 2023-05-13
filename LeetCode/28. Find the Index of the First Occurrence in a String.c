#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char hystack[100000], needle[100000];
    scanf("%s %s", hystack, needle);

    int len = strlen(hystack); // len of hystack
    int len2 = strlen(needle); // len of neeedle

    int flag=1;

    for(int i=0; i<=len-len2; i++){
        char temp[len2];
        for(int j=0; j<len2; j++){
            temp[j] = hystack[i+j];
        }

        if(!strcmp(needle, temp)){
            printf("%d\n", i);
            flag=0;
            break;
        }
    }

    if(flag){
        printf("-1\n");
    }
    return 0;
}
