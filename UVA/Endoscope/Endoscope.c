#include <stdio.h>
int N;//length of the map
int M;//width of the map
int R;//vertical position of entry (y)
int C;//Horizontal position of entry(x)
int L;//Length of Endoscope
int map[51][51];//pipe line map
char MAP[51][51];//pipe line map
int visited[51][51]={0,};
int count=0;

void readCase(){
    scanf("%d %d %d %d %d", &N, &M, &R, &C, &L);
    for(int i=0; i<N; i++)for(int j=0; j<M; j++){
        scanf("%d",&map[i][j]);
        if(map[i][j]==1)MAP[i][j]='+';
        if(map[i][j]==2)MAP[i][j]='|';
        if(map[i][j]==3)MAP[i][j]='-';
        if(map[i][j]==4)MAP[i][j]='L';
        if(map[i][j]==5)MAP[i][j]='F';
        if(map[i][j]==6)MAP[i][j]='7';
        if(map[i][j]==7)MAP[i][j]='J';
        if(map[i][j]==0)MAP[i][j]='0';
    }

}

void printCase(){
    printf("N=%d M=%d %R=d C=%d L=%d\n", N, M, R, C, L);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%c",MAP[i][j]);
        }
        printf("\n");
    }
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
    if(i==L){
        return i;
    }
    if(visited[X][Y])return 0;
    visited[X][Y]=1;

    if(MAP[X][Y]='0')return;
    else if(MAP[X][Y]='+'){
        if(X-1>=0)fill(X-1,Y,i+1);
        if(X+1<M)fill(X+1,Y,i+1);

        if(Y-1>=0)fill(X,Y-1,i+1);
        if(Y+1<N)fill(X,Y+1,i+1);
    }
    else if(MAP[X][Y]='|'){
        if(Y-1>=0)fill(X,Y-1,i+1);
        if(Y+1<N)fill(X,Y+1,i+1);
    }
    if(MAP[X][Y]='-'){
        if(X-1>=0)fill(X-1,Y,i+1);
        if(X+1<M)fill(X+1,Y,i+1);
    }
    if(MAP[X][Y]='L'){
        if(Y+1<N)fill(X,Y+1,i+1);
        if(X+1<M)fill(X+1,Y,i+1);
    }
    if(MAP[X][Y]='F'){
        if(Y+1<N)fill(X,Y+1,i+1);
        if(Y+1<N && X+1<M)fill(X+1,Y+1,i+1);
    }
    if(MAP[X][Y]='7'){
        if(Y+1<N)fill(X,Y+1,i+1);
        if(Y+1<N && X-1>=0)fill(X-1,Y+1,i+1);
    }
    if(MAP[X][Y]='J'){
        if(Y+1<N)fill(X,Y+1,i+1);
        if(X-1>=0)fill(X-1,Y,i+1);
    }
}


int main(){
    freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--){
        readCase();
//        printCase();
        int ans = fill(R,C,0);
        printMap();
    }
}
