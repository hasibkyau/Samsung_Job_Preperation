#include <iostream>
#include <vector>

using namespace std;

vector<int> mat[11];
int N,M,DP[11],cycle[11],tempCycle[11], sum=1e9, tempSum=0;

void initDP(){
    for(int i=0; i<11; i++){
        DP[i]=-1;
    }
}

void initTemp(){
    tempSum=0;
    for(int i=0; i<11; i++){
        tempCycle[i]=0;
    }
}

void printTempCycle(){
    for(int i=1; i<11; i++) cout << tempCycle[i] << " ";
    cout << endl;
}

void initCycle(){
    for(int i=0; i<11; i++){
        cycle[i]=0;
    }
}

void readCase(){
    scanf("%d%d",&N,&M);
    for(int i=1; i<=M; i++){
    int u,v;
    scanf("%d%d",&u,&v);
    mat[u].push_back(v);
    }
}

void printCase(int x){
    for(int i=x; i<=N; i++){
        cout << i << ":";
        for(int j=0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout << endl;
    }
}

bool detectCycle(int node){
    bool x;
    for(auto i:mat[node]){
        if(-1==DP[i]){
            DP[i]=1;
            x = detectCycle(i);
        }
        else if(0==DP[i]){
            DP[node]=0;
            tempCycle[node]=1;
            return true;
        }
        else if(1==DP[i]){
            DP[node]=-1;
            return false;
        }
    }
    if(x) DP[node]=0, tempCycle[node]=1;
    else DP[node]=-1;

    return x;
}

bool DFS(int node, int c){
    bool loop = detectCycle(node);
    return loop;
}

int main(){
    freopen("input.txt","r",stdin);
    readCase();
    printCase(1);
    initDP();


    for(int i=1; i<=N; i++){
        bool loop=false;
        initTemp();
        if(0!=DP[i]){
            DP[i]=0;
            loop = DFS(i,1);
            if(loop) cout << "Cycle Found for:"<<i<< endl;
            else cout << "Cycle Not Found for:" << i << endl;
            printTempCycle();
        }

    }
    return 0;
}
