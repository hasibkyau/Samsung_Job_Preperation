#include <iostream>
#include <vector>
using namespace std;

vector<int> mat[11];
vector<bool> vis(11, false);
vector<bool> order(11, false);
vector<int> ans[11];
int Index = 1;
int n, m;
int cycleStart, cycleEnd;
int ind, minSum;

void dfs(int node){
  vis[node] = true;
  order[node] = true;

  for(int edge : mat[node]){

    if(vis[edge] == false || order[edge] == false){
      dfs(edge);
    }
    else if(order[edge] == true){
      cycleStart = edge;
      cycleEnd = node;

      if(cycleStart >= cycleEnd){
        int temp = cycleStart;
        cycleStart = cycleEnd;
        cycleEnd = temp;
      }

      int sum = 0;
      for(int i = cycleStart; i<=n; i++){
        if(order[i] == true){

          sum = sum +i;
          ans[Index].push_back(i);
        }
      }
      ans[Index].push_back(sum);
      Index++;
      cycleStart = 0;
      cycleEnd = 0;

    }
  }

  order[node] = false;
}

int main(){
   freopen("input.txt","r",stdin);
  scanf("%d %d", &n, &m);
  for(int i=1; i<=m; i++){
    int u, v;
    scanf("%d %d", &u, &v);
    mat[u].push_back(v);
  }

  for(int i=1; i<=n; i++){
    if(vis[i] == false){
      dfs(i);
    }
  }

  ind=-1, minSum = 1e9;

  for(int i=1; i<Index; i++){
    int sz = ans[i].size();
    int sum = ans[i][sz-1];

    if(sum < minSum){
      minSum = sum;
      ind = i;
    }
  }

  for(int i=0; i<ans[ind].size()-1; i++){
    printf("%d ", ans[ind][i]);
  }
  printf("\n");

}
