#include<stdio.h>

int N,price[1001],weight[1001];
int dp[1001][31];

int solve(int i,int cap)
{
    if(dp[i][cap]!=-1)
    {
        return dp[i][cap];
    }
    if(i==N)
    {
      return dp[i][cap]=0 ;
    }

    int left=solve(i+1,cap);
    int right;
    if(cap>=weight[i]) right=price[i]+solve(i+1,cap-weight[i]);
    else right=0;
    if(left>right) return dp[i][cap]=left;
    else return dp[i][cap]=right;
}

int main(){
    freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);

        for(int i=0; i<N; i++)
        {
            scanf("%d%d",&price[i],&weight[i]);
        }

        for(int i=0; i<=1000; i++)
        {
            for(int j=0; j<=30; j++)
            {
                dp[i][j]=-1;
            }
        }
        int G;
        scanf("%d",&G);
        //printf("%d\n",G);
        int ans=0;
        for(int i=0; i<G; i++)
        {
            int w;
            scanf("%d",&w);
            ans+=solve(0,w);
            //printf("%d\n",ans);


        }
        printf("%d\n",ans);

    }

//    return 0;
}
