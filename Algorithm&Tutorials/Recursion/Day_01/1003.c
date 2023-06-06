#include <stdio.h>

int N, A[100];
void print(){
    for(int i=0; i<N; i++){
        printf("%d",A[i]);
    }
    printf("\n");
}

void solve(){
    for(int i=0; i<N; i++){
        A[i]=0;
    }
}


int main(){
    scanf("%d", &N);
    solve();
    print();


    return 0;
}


