#include <iostream>
#include <vector>
using namespace std;
//Declaring varibles
vector<int> mat[11];
int N,M,u,v,DP[11],cycle[11], sum=1e9, tempSum=0;
//Read inputs
void readCase(){
    scanf("%d%d",&N,&M);
    for(int i=1; i<=M; i++) scanf("%d%d",&u,&v), mat[u].push_back(v);
}
//compare the newly found cycle with previous cycle
void cmpTempCycle(){
    tempSum=0;
    for(int i=1; i<11; i++)if(1==DP[i])tempSum+=i;//calculate the cost
    if(tempSum<=sum) for(int i=1; i<=11; i++) cycle[i]=DP[i];//if the cost is less than previous one update the previous one
}
//detect cycles of nodes adjacent edge
bool detectCycle(int node, int edge){
    bool x;
    if(node==edge){cmpTempCycle(); return true;}
    if(1==DP[edge]) return false;
    DP[edge]=1;//visit node and go forward
    //if the start node not found
    for(auto i:mat[edge]){
        bool x = detectCycle(node, i);
        if(i!=node)DP[i]=0;
    }
    return x;
}
//Detect all posible cycles for each node
void DFS(int node){
    for(auto edge:mat[node]) bool loop = detectCycle(node, edge);
}
//main function start
int main(){
    freopen("input.txt","r",stdin);
    readCase();
    for(int i=0; i<11; i++) cycle[i]=0;//initialize Cycle
    for(int i=1; i<=N; i++){//passing each nodes of the graph to detect all possible cylcles
        for(int j=0; j<11; j++) DP[j]=0;//initialized DP
        DP[i]=1;//the parent node is always visited
        DFS(i);
    }
    //Print the cycle with the min cost
    for(int i=1; i<11; i++) if(cycle[i]==1) printf("%d ",i);
    cout << endl;
    return 0;
}
