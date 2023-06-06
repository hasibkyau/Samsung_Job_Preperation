#include <stdio.h>
#include <math.h>

int N, NB, X[101], Y[101], A[100], count=0, used[100]={0,}, min=99999;

void print(){
    int cost=abs(X[0]-X[A[0]]) + abs(Y[0]-Y[A[0]]);
//    printf("InitCost:%d ",cost);

//    printf(" Perm: ");
    int tempCost=0;
    for(int i=0; i<N-1; i++){

        tempCost+=abs(X[A[i]]-X[A[i+1]]) + abs(Y[A[i]]-Y[A[i+1]]);
//        printf("%d ",tempCost);
    }
//    printf(" Cost %d ",tempCost);
    int finalCost = abs(X[A[N-1]]-X[0]) + abs(Y[A[N-1]]-Y[0]);
//    printf("returnCost:%d ",finalCost);
    cost= cost+tempCost+finalCost;
//    printf("cost = %d min = %d\n", cost, min);
//    printf("Totalcost:%d\n",cost);
    if(cost<min) min=cost;

}

void solve(int i){
    if(i==N){
        print();
        return;
    }
    for(int j=1; j<=N; j++) if(used[j]==0){
        A[i] = j;
        used[j]=1;
        solve(i+1);
        used[j]=0;
    }
}


int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int T;
    scanf("%d",&T);
    while(T--){
    int m, n;
    scanf("%d %d", &m, &n);
    scanf("%d %d", &X[0], &Y[0]);

    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        scanf("%d %d", &X[i], &Y[i]);
    }
    min=1e9;
    solve(0);
    printf("The shortest path has length %d\n",min);
    }
    return 0;
}







