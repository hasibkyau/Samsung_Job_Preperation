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
            printf("%d",visited[i][j]);
        }
        printf("\n");
    }
}

int check(int x, int y){
    if(x>=0 && x<M && y>=0 && y<N){
        if(map[x][y]!=0 && visited[x][y]==0){
            return 1;
        }
    }
    return 0;
}

int up(int pipe){
    if(pipe==3 || pipe==7 || pipe==4) return 0;
    else return 1;
}

int down(int pipe){
    if(pipe==6 || pipe==5 || pipe==3)return 0;
    else return 1;
}

int left(int pipe){
    if(pipe==2 || pipe==6 || pipe==7)return 0;
    else return 1;
}

int right(int pipe){
    if(pipe==2 || pipe==4 || pipe==5)return 0;
    else return 1;
}

int fill(int X, int Y, int i){
    if(i>L){
        return i;
    }
    if(visited[X][Y] && map[X][Y]==0)return 0;
    visited[X][Y]=1;
//    if(map[X][Y]=0)return;
    if(1==map[X][Y]){ // 1 = +
        if(check(X-1,Y)){//left
            if(left(map[X-1][Y]))fill(X-1,Y,i+1);
        }
        if(check(X+1,Y)){//right
            if(right(map[X+1][Y]))fill(X+1,Y,i+1);
        }

        if(check(X,Y-1)){//down
            if(down(map[X][Y-1]))fill(X,Y-1,i+1);
        }
        if(check(X,Y+1)){//up
            if(up(map[X][Y+1]))fill(X,Y+1,i+1);
        }
    }
    else if(2==map[X][Y]){ //2 = |
        if(check(X,Y-1)){//down
            if(down(map[X][Y-1]))fill(X,Y-1,i+1);
        }
        if(check(X,Y+1)){//up
            if(up(map[X][Y+1]))fill(X,Y+1,i+1);
        }
    }
    if(3==map[X][Y]){// 3 = -
        if(check(X-1,Y)){//left
            if(left(map[X-1][Y]))fill(X-1,Y,i+1);
        }
        if(check(X+1,Y)){//right
            if(right(map[X+1][Y]))fill(X+1,Y,i+1);
        }
    }
    if(4==map[X][Y]){ // 4 = L
        if(check(X,Y+1)){//up
            if(up(map[X][Y+1]))fill(X,Y+1,i+1);
        }
        if(check(X+1,Y)){//right
            if(right(map[X+1][Y]))fill(X+1,Y,i+1);
        }
    }
    if(5==map[X][Y]){ //5=F
        if(check(X,Y+1)){//up
            if(up(map[X][Y+1]))fill(X,Y+1,i+1);
        }
        if(check(X+1,Y+1)){//upper right
            if(right(map[X+1][Y+1]))fill(X+1,Y+1,i+1);
        }
    }
    if(6==map[X][Y]){ // 6 = 7
        if(check(X,Y+1)){//up
            if(up(map[X][Y+1]))fill(X,Y+1,i+1);
        }
        if(check(X-1,Y+1)){//upper left
            if(up(map[X+1][Y+1]))fill(X-1,Y+1,i+1);
        }
    }
    if(7==map[X][Y]){ // 7 = J
        if(check(X,Y+1)){//right
            if(right(map[X][Y+1]))fill(X,Y+1,i+1);
        }
        if(check(X-1,Y)){//left
            if(left(map[X-1][Y]))fill(X-1,Y,i+1);
        }
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
        int ans = fill(R,C,1);
        printMap();
        printf("\n");
    }
}

