#include <stdio.h>
#define LENGTH 100
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
    printf("N=%d M=%d R=%d C=%d L=%d\n", N, M, R, C, L);
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
            printf("%d ",visited[i][j]);
        }
        printf("\n");
    }
}

int avail(int x, int y){
    if(x>=0 && x<N && y>=0 && y<M){
        if(map[x][y]!=0 && visited[x][y]==0){
            return 1;
        }
    }
    return 0;
}

int up(int x, int y){
    if(!avail(x,y)) return 0;
    int pipe=map[x][y];
    if(3!=pipe && 4!=pipe && 7!=pipe){
        return 1;
    }
    return 0;
}

int down(int x, int y){
    if(!avail(x,y)) return 0;
    int pipe=map[x][y];
    if(3!=pipe && 5!=pipe && 6!=pipe){
        return 1;
    }
    return 0;
}

int left(int x, int y){
    if(!avail(x,y)) return 0;
    int pipe=map[x][y];
    if(2!=pipe && 6!=pipe & 7!=pipe){
        return 1;
    }
    return 0;
}

int right(int x, int y){
    if(!avail(x,y)) return 0;
    int pipe=map[x][y];
    if(pipe!=2 && pipe!=4 && pipe!=5){
        return 1;
    }
    return 0;
}

void fill(int X, int Y, int i){
    if(i<0)return;
    if(0==map[X][Y] || 1==visited[X][Y]) return;
    visited[X][Y]=1;
    count++;

    if(1==map[X][Y]){ // 1 = +
        if(up(X-1,Y))fill(X-1,Y,i-1);
        if(down(X+1,Y))fill(X+1,Y,i-1);
        if(left(X,Y-1))fill(X,Y-1,i-1);
        if(right(X,Y+1))fill(X,Y+1,i-1);
    }

    else if(2==map[X][Y]){ //2 = |
        if(up(X-1,Y))fill(X-1,Y,i-1);
        if(down(X+1,Y))fill(X+1,Y,i-1);
    }

    else if(3==map[X][Y]){// 3 = -
        if(left(X,Y-1))fill(X,Y-1,i-1);
        if(right(X,Y+1))fill(X,Y+1,i-1);
    }
    else if(4==map[X][Y]){ // 4 = L
        if(up(X-1,Y))fill(X-1,Y,i-1);
        if(right(X,Y+1))fill(X,Y+1,i-1);
    }
    else if(5==map[X][Y]){ //5=F
        if(right(X,Y+1))fill(X,Y+1,i-1);
        if(down(X+1,Y))fill(X+1,Y,i-1);
    }
    else if(6==map[X][Y]){ // 6 = 7
        if(left(X,Y-1))fill(X,Y-1,i-1);
        if(down(X+1,Y))fill(X+1,Y,i-1);
    }
    else if(7==map[X][Y]){ // 7 = J
        if(up(X-1,Y))fill(X-1,Y,i-1);
        if(left(X,Y-1))fill(X,Y-1,i-1);
    }
}


int main(){
    freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--){
        initVisited();
        count=0;
        readCase();
//        printCase();
        fill(R,C,L-1);
//        printMap();
//        printf("count=%d\n",count);
        printf("%d\n",count);
    }
    return 0;
}
