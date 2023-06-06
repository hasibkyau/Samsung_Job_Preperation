#include <stdio.h>
int N; map[200][200], DP[200][200],count=0;

void initDP(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            DP[i][j]=0;
        }
    }
}

void printCase(){
    printf("%d\n",N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d",map[i][j]);
        }
        printf("\n");
    }
}


void fill(int x, int y){
    if(1==DP[x][y]){
        return;
    }
    count++;
    DP[x][y]=1;
    map[x][y]=N;

    if(x-1>=0)
        fill(x-1,y);
    if(y-1>=0)
        fill(x,y-1);
    if(y+1<N)
        fill(x,y+1);
    if(x+1<N)
        fill(x+1,y);

    if(x-1>=0 && y-1>=0)
        fill(x-1, y-1);
    if(x-1>=0 && y+1<N)
        fill(x-1,y+1);

    if(x+1<N && y+1<N)
        fill(x+1,y+1);
    if(x+1<N&&y-1>=0)
        fill(x+1,y-1);
}


int main(){
    while(1==scanf("%d",&N)){
        initDP();
        fill(0,0);
        printCase();
        printf("count = %d\n\n",count);
        count=0;
        }
}

