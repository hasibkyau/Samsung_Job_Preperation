#include <iostream>
#include <vector>

using namespace std;

int N, M, cnt=0;
bool Jumping=false;
int mat[20][20], DP[20][20];

void initMat(){
    for(int i=0; i<20; i++) for(int j=0; j<20; j++){
        mat[i][j]=0;
        DP[i][j]=0;
    }
}

void readCase(){
    cin >> N >> M;
    for(int i=0; i<N; i++) for(int j=0; j<M; j++){
        scanf("%d", &mat[i][j]);
    }
}

void printCase(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printDP(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
//            cout << DP[i][j] << " ";
        }
//        cout << endl;
    }
//    cout << endl;
}



void Climb(int step, int pos, int level){

    if(1==DP[step][pos]){
//        DP[step][pos]=0;
//        cout << " : Already Visited" << endl;
        return;
    }
    else{
//        cout << " : Not visited" << endl;
        DP[step][pos]=1;
    }


    if(0==mat[step][pos]){
        level++;
    }

    if(1==mat[step][pos]){
        if(cnt<=level)cnt=level;
        level=0;
    }

    if(3==mat[step][pos]){
//        cout << "At:" << mat[step][pos];
//        cout << "Target is Found at:[" << step <<"][" <<pos << "]" << endl;
        if(cnt<=level) cnt=level;
//        printDP();
        DP[step][pos]=0;
//        cout << "Level:" << cnt << endl;
        return;
    }

    if(step-1>=0){
//        cout << "Going Up  :" ;
        Climb(step-1, pos, level);
    }
    if(step+1<N){
//        cout << "Going Down:" ;
        Climb(step+1, pos, level);
    }
    if(pos-1>=0 && 0!=mat[step][pos-1] && 0!=mat[step][pos]){
//        cout << "Going Left:" ;
        Climb(step, pos-1, level);
    }
    if(pos+1<M && 0!=mat[step][pos+1] && 0!=mat[step][pos]){
//        cout << "Going Righ:" ;
        Climb(step,pos+1, level);
    }
    DP[step][pos]=0;
    return;
}


int main(){
    freopen("input.txt", "r", stdin);
    initMat();
    readCase();
//    printCase();

    Climb(N-1,0,0);

    cout << cnt << endl;

    return 0;
}


