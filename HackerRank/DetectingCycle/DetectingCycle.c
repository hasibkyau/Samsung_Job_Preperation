#include <stdio.h>

#define size 10
int N,M,u,v,DP[size],cnt=0;
int map[size][2],cycle[size]={0,},min=1e9;

void initDP(){
    for(int i=0; i<size; i++)
        DP[i]=0;
}

void printCase(){
    for(int i=0; i<M; i++){
         printf("%d %d\n",map[i][0],map[i][1]);
    }
}

void readCase(){
    scanf("%d %d",&N,&M);
    for(int i=0; i<M; i++){
        scanf("%d %d",&map[i][0], &map[i][1]);
    }
}

void solve(int u, int v, int i, int c){
    if(i>=N)return;
    //checkin if the node is not visited
    if(c!=DP[v]){
        DP[u]=c;
        DP[v]=c;
        solve(map[i+1][0],map[i+1][1],i,c);
    }
    else if(c==DP[v]){
        printf("%d %d\n",u,v);
        int sum=0;
        for(int j=v; j<=u; j++){
            if(c==DP[j]){sum+=j;}
        }
        if(sum<=min){
            for(int j=0; j<=N; j++){
                if(c==DP[j]){
                    cycle[j]=1;
                }
                else cycle[j]=0;
            }
        }
        solve(map[i+1][0],map[i+1][1],i+1,c+1);
    }
    return;
}

int main() {
    freopen("input.txt","r",stdin);
    initDP();
    readCase();
    printCase();
    solve(map[0][0], map[0][1], 1, 1);
//    printf("End\n");
    for(int i=0; i<N; i++){
        if(1==cycle[i]){
            printf("%d ",i);
        }
    }
    return 0;
}
