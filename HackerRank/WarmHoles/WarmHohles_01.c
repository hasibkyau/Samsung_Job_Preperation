#include <stdio.h>
int N, startX, startY, endX, endY, WH[6][6], used[101], A[101], min=1e9;

void readCase(){
    scanf("%d",&N);
    scanf("%d %d %d %d",&startX, &startY, &endX, &endY);

    for(int i=0; i<N; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&WH[i][j]);
        }
    }
}

void printCase(){
    printf("Number of Warm Holes:%d\n",N);
    printf("Start:(%d,%d) End(%d,%d)\n",startX, startY, endX, endY);

    for(int i=0; i<N; i++){
        printf("Warmhole No %d:",i+1);
        for(int j=0; j<5; j++){
            printf("%d ",WH[i][j]);
        }
        printf("\n");
    }
}

void print(){
    int stop[2];
    int cost=0;

    stop[0]=startX;
    stop[1]=startY;

    for(int i=0; i<N; i++){
        int temp=0;


        //0 0 1
        if(A[i]==1){

            int temp1=abs(stop[0]-WH[i][0])+abs(stop[1]-WH[i][1]);
            int temp2=abs(stop[0]-WH[i][2])+abs(stop[1]-WH[i][3]);
            if(temp1<temp2){
              temp=temp1;
              stop[0]=WH[i][2];
              stop[1]=WH[i][3];
            }
            else{
                temp=temp2;
                stop[0]=WH[i][0];
                stop[1]=WH[i][1];
            };


            temp+=WH[i][4];
        }
//        printf("%d:",temp);
        cost+=temp;
    }
    cost+=abs(stop[0]-endX)+abs(stop[1]-endY);
    if(cost<min) min=cost;
//    printf(" x1:%d y1:%d total cost:%d\n",stop[0],stop[1],cost);

//    for(int i=0; i<N; i++){
//        printf("%d",A[i]);
//    }
//    printf("\n");
}

void solve(int i){
    if(i==N){
        print();
        return;
    }

    A[i]=0;
    solve(i+1);
    A[i]=1;
    solve(i+1);

}

int main(){
    freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--){
        min=1e9;
        readCase();
//        printCase();
        solve(0);
        printf("%d\n",min);
    }

    return 0;
}
