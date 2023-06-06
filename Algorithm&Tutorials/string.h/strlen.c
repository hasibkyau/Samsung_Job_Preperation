#include <stdio.h>

int str_len(char *str){
    printf("String = %s\n",str);
    int i;
    for(int i=0; ; i++){
        if(str[i]==0) break;
    }
    printf("len=%d",n);
    return 0;
}

int main(){
    char str[100] = "Hello";
    str_len(&str);
    return 0;
}
