#include <iostream>
#include <vector>

using namespace std;

vector<int> mat[11];
int N,M,DP[11],cycle[11],tempCycle[11], sum=1e9, tempSum=0;


//Initializing temporary cycle with all zero.
void initTemp(){for(int i=0; i<11; i++)tempCycle[i]=0;}


//Function for comparing temporary cycle with main cycle.
void cmpTempCycle(){
    tempSum=0;
    for(int i=1; i<11; i++)if(1==tempCycle[i]) tempSum+=i; // travarsal cost
    if(tempSum<=sum) for(int i=1; i<=11; i++) cycle[i]=tempCycle[i]; // if the cycle is min then update the main cycle
}

//Read Case
void readCase(){
    scanf("%d%d",&N,&M);
    for(int i=1; i<=M; i++){
    int u,v;
    scanf("%d%d",&u,&v);
    mat[u].push_back(v);
    }
}


//detect cycle for a specific node
bool detectCycle(int node){
    bool x;
    for(auto i:mat[node]){
        if(-1==DP[i]){
            DP[i]=1;
            x = detectCycle(i);//if this edge is a part of a cycle it will return true.
        }
        else if(0==DP[i]){//this node is a part of this cycle
            DP[node]=0;//as it's a part of this cycle, skip this node next time.
            tempCycle[node]=1;//this edge is visited
            return true;
        }
        else if(1==DP[i]){//this node a part of another cycle
            DP[node]=-1;// this edge is not a part of a cycle
            return false;
        }
    }
    if(x) DP[node]=0, tempCycle[node]=1; // this node is a part of a loop, this node will be never visited
    else DP[node]=-1;//this edge is not a part of a cycle

    return x;
}

//Find if the node has a cycle or not
bool DFS(int node, int c){
    bool loop = detectCycle(node);
    return loop;
}


int main(){
    freopen("input.txt","r",stdin);
    readCase();

    for(int i=0; i<11; i++) DP[i]=-1; //Initializing DP

    for(int i=1; i<=N; i++){
        bool loop=false;
        initTemp();
        if(0!=DP[i]){//if this node is not a part of a cycle
            DP[i]=0;//This node will never visited again
            loop = DFS(i,1);//check if this node has a cycle or not.
            if(loop) cmpTempCycle(); //if this node has a cycle compare this cycle with the previous cycle
        }

    }
    //print the expected cycle
    for(int i=1; i<11; i++) if(cycle[i]==1) printf("%d ",i);
    cout << endl;

    return 0;
}
