




#include <stdio.h>
#include <math.h>

int N, set[100], dp[101][50001], total=0;
//int count=0;

int solve(int i, int sum1)
{
    if(dp[i][sum1] != -1) return dp[i][sum1];
//    count++;
    if(i==N)
    {
        int sum2=total-sum1;
        int diff=abs(sum2-sum1);
//        printf("%d diff %d = %d\n", sum1, sum2, diff);
        dp[i][sum1]=diff;
        return diff;
    }

    int A = solve(i+1, sum1);
    int B = solve(i+1, sum1+set[i]);
    if(A<B)
        return dp[i][sum1]=A;
    else
        return dp[i][sum1]=B;
}

int main()
{
//    freopen("input.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++)
    {
        scanf("%d",&N);
        for(int i=0; i<N; i++)
        {
            scanf("%d", &set[i]);
            total=total+set[i];
        }

        for(int i=0; i<=100; i++)
        {
            for(int j=0; j<=50000; j++)
            {
                dp[i][j]=-1;
            }
        }

        int res=solve(0,0);
        printf("%d\n", res);

//    printf("Min: %d\n", res);
//    printf("Count: %d\n", count);
//    count=0;
      total=0;


    }

}




