#include <stdio.h>

int N, A[100], count=0, used[100]={0,};

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
    for(int j=0; j<N; j++) if(used[j]==0){
        A[i] = j;
        used[j]=1;
        solve(i+1);
        used[j]=0;
    }
}


int main(){
    scanf("%d", &N);
    solve(0);
    return 0;
}







