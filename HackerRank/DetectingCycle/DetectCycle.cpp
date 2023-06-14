#include <iostream>
#include <vector>
using namespace std;

int N,M,u,v,DP[11],cnt=0,cycle[11], sum=1e9;
vector<int> map[11];

void initDP(){
    for(int i=0; i<11; i++)
        DP[i]=0;
}

void printCase(){
    for(int i=1; i<=N; i++){
        cout << i << ":";
        for(int j=0; j<map[i].size(); j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

void readCase(){
    cin>>N>>M;
    for(int i=0; i<M; i++){
        int u,v;
        cin >> u >> v;
        map[u].push_back(v);
    }
}

void solve(int u, int v,int c, int i){
    cout<<"u:"<<u<<" v:"<<v<<endl;
    if(c!=DP[u]){
//        cout<<i<<endl;
        DP[u]=c;
        int u2=v, v2=map[v][0];

//        vector<int>::iterator it;
//        it = map[i].begin();
//        map[i].erase(it);

        solve(u2,v2,c,i);
    }
    else if(c==DP[u]){
        cout << "cycle started from:"<<u<<endl;
        cout<<"start"<<endl;
        solve(i+1,map[i+1][0],c+1,i+1);
    }
    return;
}

int main() {
    freopen("input.txt","r",stdin);
    initDP();
    readCase();
//    printCase();
    cout<< "Start:" << endl;

    solve(1,map[1][0],1,1);
    cout<< cnt << endl;
    cnt=0;

    return 0;
}
