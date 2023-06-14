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

void initvisited(){
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
    if(x<0 || x>=N || y<0 || y>=M || map[x][y]==0){
        return 0;
    }
    return 1;
}

int up(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || map[x][y]==0)
        return 0;
    if(map[x][y]==1 || map[x][y]==2 || map[x][y]==4 || map[x][y]==7)
        return 1;
    return 0;
}

int down(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || map[x][y]==0)
        return 0;
    if(map[x][y]==1 || map[x][y]==2 || map[x][y]==5 || map[x][y]==6)
        return 1;
    return 0;
}
int left(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || map[x][y]==0)
        return 0;
    if(map[x][y]==1 || map[x][y]==3 || map[x][y]==6 || map[x][y]==7)
        return 1;
    return 0;
}

int right(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || map[x][y]==0)
        return 0;
    if(map[x][y]==1 || map[x][y]==3 || map[x][y]==4 || map[x][y]==5)
        return 1;
    return 0;
}


void fill(int x, int y, int len){
  if(len<0)return;
  if(visited[x][y]==0)
        visited[x][y]=1,count++;


    if(up(x,y) && down(x-1,y))
        fill(x-1,y,len-1);
    if(down(x,y) && up(x+1,y))
        fill(x+1,y,len-1);
    if(left(x,y) && right(x,y-1)){
        fill(x,y-1,len-1);
    }
    if(right(x,y) && left(x,y+1)){

        fill(x,y+1,len-1);
    }
}


int main(){
    freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--){
        initvisited();
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
