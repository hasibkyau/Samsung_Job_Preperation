#include <stdio.h>
int N, A[100];
void print(){
    for(int i=0; i<N; i++){
        printf("%d",A[i]);
    }
    printf("\n");
}

int main(){
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        A[i]=0;
    }
    print();


    return 0;
}

