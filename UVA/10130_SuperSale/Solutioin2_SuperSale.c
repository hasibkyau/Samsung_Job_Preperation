
#include <stdio.h>

#define SIZE_N 1001
#define SIZE_MW 31

int N;
int P[SIZE_N], W[SIZE_N];
int DP[SIZE_N][SIZE_MW];

void initDP(){
    for(int i=0; i<SIZE_N; i++)for(int j=0; j<SIZE_MW; j++)
            DP[i][j]=-1;

}

void readCase(){
    int i;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d %d",&P[i],&W[i]);
    }
}

int solve(int i, int cap){

    if(DP[i][cap] != -1) return DP[i][cap];
    if(i==N) return DP[i][cap]=0;

    int left=solve(i+1,cap);
    int right=0;
    if(cap>=W[i])
        right=P[i]+solve(i+1,cap-W[i]);


    if(left>right) return DP[i][cap]=left;
    else return DP[i][cap]=right;




//
//    int left=solve(i+1,cap);
//    int right;
//    if(cap>=W[i]) right=P[i]+solve(i+1,cap-W[i]);
//    else right=0;
//    if(left>right) return DP[i][cap]=left;
//    else return DP[i][cap]=right;

}


int main(){
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d",&T);

    while(T--){
        readCase();
        int G, MW;
        scanf("%d",&G);

        initDP();


        int Ans=0;
        while(G--){
            scanf("%d",&MW);
            Ans += solve(0,MW);
        }
        printf("%d\n",Ans);
    }
    return 0;
}




