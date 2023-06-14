#include <stdio.h>
#define LENGTH 51
int N;//length of the map
int M;//width of the map
int R;//vertical position of entry (y)
int C;//Horizontal position of entry(x)
int L;//Length of Endoscope
int map[LENGTH][LENGTH];//pipe line map
int visited[LENGTH][LENGTH]={0,};
int count=0;

void initVisited(){
    for(int i=0; i<LENGTH; i++)for(int j=0; j<LENGTH; j++){
        visited[i][j]=0;
    }
}

void readCase(){
    scanf("%d %d %d %d %d", &N, &M, &R, &C, &L);
    for(int i=0; i<N; i++)for(int j=0; j<M; j++){
        scanf("%d",&map[i][j]);
    }

}

void printCase(){
    printf("N=%d M=%d %R=d C=%d L=%d\n", N, M, R, C, L);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d",map[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printMap(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d",visited[i][j]);
        }
        printf("\n");
    }
}

int fill(int X, int Y, int i){
    if(i==2+1){
        return i;
    }
    if(visited[X][Y] && map[X][Y]==0)return 0;
    visited[X][Y]=1;

    if(map[X][Y]=0)return;
    else if(map[X][Y]=1){ // 1 = +
        if(X-1>=0 && map[X-1][Y]!=0)fill(X-1,Y,i+1);
        if(X+1<M && map[X+1][Y]!=0)fill(X+1,Y,i+1);

        if(Y-1>=0 && map[X][Y-1]!=0)fill(X,Y-1,i+1);
        if(Y+1<N && map[X][Y+1]!=0)fill(X,Y+1,i+1);
    }
    else if(map[X][Y]=2){ //2 = |
        if(Y-1>=0 && map[X][Y-1]!=0)fill(X,Y-1,i+1);
        if(Y+1<N && map[X][Y+1]!=0)fill(X,Y+1,i+1);
    }
    if(map[X][Y]=3){// 3 = -
        if(X-1>=0 && map[X-1][Y]!=0)fill(X-1,Y,i+1);
        if(X+1<M && map[X+1][Y]!=0)fill(X+1,Y,i+1);
    }
    if(map[X][Y]=4){ // 4 = L
        if(Y+1<N && map[X][Y+1]!=0)fill(X,Y+1,i+1);
        if(X+1<M && map[X+1][Y]!=0)fill(X+1,Y,i+1);
    }
    if(map[X][Y]=5){ //5=F
        if(Y+1<N && map[X][Y+1]!=0)fill(X,Y+1,i+1);
        if(Y+1<N && X+1<M && map[X+1][Y+1]!=0)fill(X+1,Y+1,i+1);
    }
    if(map[X][Y]=6){ // 6 = 7
        if(Y+1<N && map[X][Y+1]!=0)fill(X,Y+1,i+1);
        if(Y+1<N && X-1>=0 && map[X-1][Y+1]!=0)fill(X-1,Y+1,i+1);
    }
    if(map[X][Y]=7){ // 7 = J
        if(Y+1<N && map[X][Y+1]!=0)fill(X,Y+1,i+1);
        if(X-1>=0 && map[X-1][Y]!=0)fill(X-1,Y,i+1);
    }
}


int main(){
    freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--){
        initVisited();
        readCase();
        printCase();
        int ans = fill(R,C,0);
        printMap();
        printf("\n");
    }
}
