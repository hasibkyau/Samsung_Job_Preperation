#include <stdio.h>

int N, A[100], count=0;

int check(int i, int j){
    int k;
    for(k=0; k<i; k++){
        if(A[k]==j){
            return 1;
        }
    }
    return 0;
}



void print(){
    for(int i=0; i<N; i++){
        printf("%d",A[i]);
    }
    printf("\n");
}

void solve(int i){
    if(i==N){
        print();
        return;
    }
    for(int j=0; j<N; j++) if(0==check(i,j)){
        A[i] = j;
        solve(i+1);
    }
}


int main(){
    scanf("%d", &N);
    solve(0);
    return 0;
}






