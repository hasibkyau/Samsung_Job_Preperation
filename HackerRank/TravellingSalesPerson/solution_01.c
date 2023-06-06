#include <stdio.h>
#include <math.h>

int N, M[1001][1001], A[100], count=0, used[100]={0,}, min=99999;

void print(){
    int cost=0;
    for(int i=1; i<=N; i++){
//        printf("%d",A[i]);
        cost+=M[A[i-1]][A[i]];
    }

    if(cost<min) min=cost;

//    printf(" Total:%d\n",cost);

}

void solve(int i){
    if(i==N){
//        if(A[0]==0)
        print();
        return;
    }
    for(int j=1; j<N; j++)if(used[j]==0) {
        A[i] = j;
        used[j]=1;
        solve(i+1);
        used[j]=0;
    }
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T;
    scanf("%d",&T);
    while(T--){
    scanf("%d", &N);
    A[0]=0;
    A[N]=0;
    for(int i=0; i<N; i++)for(int j=0; j<N; j++){
        scanf("%d",&M[i][j]);
    }
    min=1e9;
    solve(1);
    printf("%d\n",min);
    }
    return 0;
}








