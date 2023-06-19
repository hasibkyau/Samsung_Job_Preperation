#include <iostream>
#include <vector>

using namespace std;

int t, cnt, N;
int mat[15][15];

void initMat(){
    for(int i=0; i<15; i++) for(int j=0; j<15; j++) mat[i][j]=0;
}

void readCase(){
    scanf("%d", &N);
    for(int i=1; i<=N; i++) for(int j=0; j<5; j++){
        scanf("%d", &mat[i][j]);
    }
}

void printCase(){
    for(int i=1; i<=N; i++){
        for(int j=0; j<5; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}



void fight(int step, int pos, int score, bool bomb){

    if(step<1 || (mat[step][pos]==2 && false==bomb)){
        if(score>=cnt) cnt=score;
        return;
    }

    if(2==mat[step][pos] && true==bomb) bomb=false;
    if(1==mat[step][pos]) score++;

    fight(step-1,pos,score, bomb);
    if(pos-1>=0)fight(step-1,pos-1,score, bomb);
    if(pos+1<5)fight(step-1,pos+1,score, bomb);

    return;
}


int main(){
    freopen("input.txt", "r", stdin);
    scanf("%d",&t);
    int x=1;
    while(true){
        if(x>t) break;
        cnt=0;
        initMat();
        readCase();
//        printCase();
        fight(N+1,2,0, true);
        cout <<"#"<< x << " " << cnt << endl;
        x++;
    }

    return 0;
}

