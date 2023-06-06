#include <stdio.h>
#include <string.h>

int N;
char Map[26][26];
int warMap[26][26];
int visited[26][26];
int war=0,count=0;

void initVisited(){
    for(int i=0; i<N; i++)for(int j=0; j<N; j++)
        visited[i][j]=0;
}

void readCase(){
    for(int i=0; i<N; i++){
        scanf("%s",Map[i]);
        for(int j=0; j<N; j++){
            warMap[i][j]= Map[i][j]-'0';
        }
    }

}

void printCase(){
    printf("%d\n",N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d",warMap[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void fill(int x, int y){
    count++;
    visited[x][y]=1;

    if(x-1>=0 && y-1>=0 && warMap[x-1][y-1]==1 && !visited[x-1][y-1])
        fill(x-1, y-1);
    if(x-1>=0 && warMap[x-1][y]==1 && !visited[x-1][y])
        fill(x-1,y);
    if(x-1>=0 && y+1<N && warMap[x-1][y+1]==1 && !visited[x-1][y+1])
        fill(x-1,y+1);

    if(y-1>=0 && warMap[x][y-1]==1 && !visited[x-1][y-1])
        fill(x,y-1);
    if(y+1<N && warMap[x][y+1]==1 && !visited[x][y+1])
        fill(x,y+1);

    if(x+1<N&&y-1>=0 && warMap[x+1][y-1]==1 && !visited[x+1][y-1])
        fill(x+1,y-1);
    if(x+1<N && warMap[x+1][y]==1 && !visited[x+1][y])
        fill(x+1,y);
    if(x+1<N && y+1<N && warMap[x+1][y+1]==1 && !visited[x+1][y+1])
        fill(x+1,y+1);

}


int main(){
    freopen("input.txt","r",stdin);
    int image=1;
    while(1==scanf("%d\n",&N)){
        initVisited();
        readCase();
        //printCase();
        war=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(warMap[i][j]==1 && !visited[i][j]){
                    war++;
                    fill(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",image,war);
        image++;

    }
}
