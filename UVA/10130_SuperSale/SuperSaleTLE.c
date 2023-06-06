#include <stdio.h>

#define SIZE_N 1001

int N;
int P[SIZE_N], W[SIZE_N];
int Ans, count;

void readCase(){
    int i;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d %d",&P[i],&W[i]);
    }
}

int solve(int i, int cap){
    count++;
    int left, right;
    if(i==N) return 0;

    left=solve(i+1,cap);
    if(cap>=W[i])
        right=P[i]+solve(i+1,cap-W[i]);
    else
        right=0;

    if(left>right) return left;
    else return right;

}

int solveCase(){
    int G, MW;
    Ans=0;
    count=0;
    scanf("%d",&G);
    while(G--){
        scanf("%d",&MW);
        Ans += solve(0,MW);
    }
}

void printCase(){
    printf("Count = %d ",count);
    printf("%d\n",Ans);
}


int main(){
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d",&T);

    while(T--){
        readCase();
        solveCase();
        printCase();
    }
    return 0;
}
