#include <iostream>
#include <vector>
using namespace std;

int N,M,u,v,DP[201];
vector<int> mat[201];

void initDP()
{
    for(int i=0; i<201; i++)
        DP[i]=-1;
}

void printCase()
{
    for(int i=0; i<N; i++)
    {
        cout << i << ":";
        for(int j=0; j<mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void readCase()
{
//    cin>>N>>M;
    for(int i=0; i<M; i++)
    {
        int u,v;
        cin >> u >> v;
        mat[u].push_back(v);//one direction
        mat[v].push_back(u);//one direction
    }
}

bool solve(int edge, int c)
{
    DP[edge]=c;
    for(auto i : mat[edge])
    {
        if(-1==DP[i])
        {
            bool X = solve(i,!c);
            if(X==false)
            {
//                cout << "False for" << mat[edge][i] << endl;
                return false;//nonbicolorable cycle found
            }

        }
        else if(c==DP[i])
        {
//            cout << "False for" << mat[edge][i] << endl;
            return false;//nonbicolorable cycle found
        }

    }

    return true;//nonbicolorable cycle found
}

int main()
{
    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    printCase();
//    cout<< "Start:" << endl;
    while(1)
    {
        cin>>N;
        if(0==N)break;
        cin>>M;
        bool X=true;
        readCase();
        //printCase();
        //cout<< "Start:" << endl;
        initDP();
        for(int i=0; i<N; i++)
        {
            if(-1==DP[i])
            {
                X = solve(i,1);
                if(!X)
                {
                    X=false;
                    break;
                }
            }

        }
        if(X)
        {
            printf("BICOLORABLE.\n");
        }
        else printf("NOT BICOLORABLE.\n");

        for(int j=0; j<=N; j++){
                mat[j].clear();
        }

    }


    return 0;
}

