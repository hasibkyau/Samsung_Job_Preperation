#include<stdio.h>

int grid[50][50],vis[50][50],cnt,N,M;
void printMap(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ",vis[i][j]);
        }
        printf("\n");
    }
}
int up(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || grid[x][y]==0)
        return 0;
    if(grid[x][y]==1 || grid[x][y]==2 || grid[x][y]==4 || grid[x][y]==7)
        return 1;
    return 0;
}

int down(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || grid[x][y]==0)
        return 0;
    if(grid[x][y]==1 || grid[x][y]==2 || grid[x][y]==5 || grid[x][y]==6)
        return 1;
    return 0;
}
int left(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || grid[x][y]==0)
        return 0;
    if(grid[x][y]==1 || grid[x][y]==3 || grid[x][y]==6 || grid[x][y]==7)
        return 1;
    return 0;
}

int right(int x,int y){
    if(x<0 || x>=N || y<0 || y>=M || grid[x][y]==0)
        return 0;
    if(grid[x][y]==1 || grid[x][y]==3 || grid[x][y]==4 || grid[x][y]==5)
        return 1;
    return 0;
}

void fill(int x,int y,int len){
//    if(len<0)
//        return;

    if(vis[x][y]==0)
        vis[x][y]=1,cnt++;


    if(up(x,y) && down(x-1,y) && len)
        fill(x-1,y,len-1);
    if(down(x,y) && up(x+1,y) && len)
        fill(x+1,y,len-1);
    if(left(x,y) && right(x,y-1) && len){
        fill(x,y-1,len-1);
    }
    if(right(x,y) && left(x,y+1) && len){

        fill(x,y+1,len-1);
    }
}

int main(){
    freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,l;
        scanf("%d%d%d%d%d",&N,&M,&x,&y,&l);


        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
                scanf("%d",&grid[i][j]);

        cnt=0;
        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
                vis[i][j]=0;

        fill(x,y,l-1);
        printMap();
       printf("%d\n",cnt);
    }
//    return 0;
}
