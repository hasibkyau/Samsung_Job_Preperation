#include <iostream>
#include <vector>

using namespace std;

vector<int> mat[11];
int N,M,DP[11],cycle[11],temp[11], sum=1e9, tempSum=0;

void initDP(){
    for(int i=0; i<11; i++){
        DP[i]=-1;
    }
}

void initTemp(){
    for(int i=0; i<11; i++){
        temp[i]=0;
    }
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

void printCycle(int node){
    cout << node << " ";
    temp[node]=1;
    tempSum+=node;
    for(auto i:mat[node]){
        if(0==DP[i])return;
        DP[i]=2;
        printCycle(i);
    }
}

void DFS(int node, int c){
    DP[node]=c;
    for(auto edge:mat[node]){

        if(-1==DP[edge]){
            DFS(edge,c);
        }
        else if(c==DP[edge]){
            cout << "Cycle Found:"<<endl;
            DP[edge]=0;
            printCycle(edge);
            cout << endl;
            initTemp();
            return;
        }
    }
    DP[node]=-1;
    return;

}

int main(){
    freopen("input.txt","r",stdin);
    readCase();
    printCase(1);
    initDP();


    for(int i=1; i<=N; i++){
        if(2!=DP[i]){
//            cout << "Eteration:"<< i << "for" << DP[i] << endl;
            DFS(i,1);
        }

    }


    return 0;
}
