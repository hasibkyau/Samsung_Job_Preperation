
#include <stdio.h>

#define SIZE_N 1001
#define SIZE_G 1001
#define SIZE_MW 301

int N, G;
int P[SIZE_N], W[SIZE_N];
int DP[SIZE_N][SIZE_MW];
int MW[SIZE_G];
int Ans;

void readCase(){
    int i;
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        scanf("%d %d",&P[i],&W[i]);
    }

    scanf("%d", &G);
    for(i=1; i<=G; i++){
        scanf("%d", &MW[i]);
    }
}

int solveCase(){
    int i, maxw, w;
    Ans=0;
    maxw=MW[1];

    for(i=2; i<=G; i++) if(MW[i]>maxw)
        maxw = MW[i];
    for(i=0; i<=N; i++)
        DP[i][0]=0;
    for(w=0; w<=maxw; w++)
        DP[0][w]=0;
    for(i=1; i<=N; i++){
        for(w=1; w<=maxw; w++){
            DP[i][w] = DP[i-1][w];
            if(w>=W[i] && P[i] + DP[i-1][w-W[i]]>DP[i][w])
                DP[i][w]=P[i]+DP[i-1][w-W[i]];

        }
    }
    Ans=0;
    for(i=1; i<=G; i++)
        Ans+=DP[N][MW[i]];
}

void printCase(){
    printf("%d\n",Ans);
}


int main(){
    int T;
    //freopen("input.txt", "r", stdin);
    scanf("%d",&T);

    while(T--){
        readCase();
        solveCase();
        printCase();
    }
    return 0;
}




