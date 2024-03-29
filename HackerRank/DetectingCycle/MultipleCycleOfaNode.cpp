#include <iostream>
#include <vector>

using namespace std;

vector<int> mat[11];
int N,M,DP[11],cycle[11],tempCycle[11], sum=1e9, tempSum=0;

void initDP(){
    for(int i=0; i<11; i++){
        DP[i]=0;
    }
}

void initTemp(){
    tempSum=0;
    for(int i=0; i<11; i++){
        tempCycle[i]=0;
    }
}

void cmpTempCycle(){
    tempSum=0;
    for(int i=1; i<11; i++){
       cout << DP[i] << " ";
       if(1==DP[i]){
            tempSum+=i;
       }
    }
    if(tempSum<=sum){
        for(int i=1; i<=11; i++){
            cycle[i]=DP[i];
        }
    }
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

bool detectCycle(int node, int edge){
    bool x;
    if(node==edge){
        cmpTempCycle();
        return true;
    }
    if(1==DP[edge]) return false;
    DP[edge]=1;

    for(auto i:mat[edge]){
        bool x = detectCycle(node, i);
        if(i!=node)DP[i]=0;
    }
    return x;
}

void DFS(int node){
    cout << "Node: " << node << endl;
    for(auto edge:mat[node]){
        bool loop = detectCycle(node, edge);
        if(loop){
            cout << "Cycle found for " << edge << endl;
//            cmpTempCycle();
        }
        else cout << "Cycle not found for " << edge << endl;
    }
    cout << endl;

    return;
}

int main(){
    freopen("input.txt","r",stdin);
    readCase();
    printCase(1);



    for(int i=1; i<=N; i++){
        initDP();
        DP[i]=1;
        DFS(i);
    }
    cout << endl;
    for(int i=1; i<11; i++) if(cycle[i]==1) printf("%d ",i);
    cout << endl;
    return 0;
}
