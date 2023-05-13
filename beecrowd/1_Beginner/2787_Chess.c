#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    if(A%2==0){
        if(B%2==0) printf("1\n");
        else printf("0\n");
    }
    else{
        if(B%2==0) printf("0\n");
        else printf("1\n");
    }
    return 0;
}
