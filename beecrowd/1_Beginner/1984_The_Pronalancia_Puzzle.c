#include <stdio.h>
#include <math.h>

int main()
{
    char arr[10];
    for(int i=0; i<10; i++){
        arr[i]=' ';
    }

    scanf("%s",arr);

    for(int i=9; i>=0; i--){
        if(arr[i] >= '0'){
            printf("%c",arr[i]);
        }
    }
    printf("\n");
    return 0;
}


