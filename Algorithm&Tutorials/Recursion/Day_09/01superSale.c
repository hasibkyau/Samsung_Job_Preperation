#include <stdio.h>

int T, N, P[1001], W[1001], G, MW[1001], maxWeight=0, max=0, totalPrice=0, dp[10001][31];

void readCase()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %d", &P[i], &W[i]);
    }

    scanf("%d",&G);

    for(int i=0; i<G; i++){
        scanf("%d",&MW[i]);
        maxWeight=maxWeight+MW[i];
    }
//    printf("Max Weight = %d\n",maxWeight);
}

void printCase()
{
    for(int i=0; i<N; i++)
    {
        printf("price = %d weight = %d\n", P[i], W[i]);
    }
    printf("Family Members = %d\n",G);
        for(int i=0; i<G; i++){
        printf("Maximum Weight = %d\n",MW[i]);
    }
}

int solve(int i, int price, int weight){
    if(dp[i][weight] != -1) return dp[i][weight];

//    printf("weight = %d\n", weight);


    if(i==N){
//            if(price>max) max=price;
//            printf("Max Weight = %d Product weight = %d Total Price = %d\n", maxWeight, weight, price);
            return dp[i][weight]=0;

    }

    int left, right;
    left = solve(i+1, price, weight);
    if(weight>W[i]){
        right = solve(i+1, price+P[i], weight+W[i]);
    }
    else{
        right = 0;
    }

    if(left>right){
        return dp[i][weight] = left;
    }
    else{
        return dp[i][weight] = right;
    }


}

void initdp(){
    int i, j;
    for(i=0; i<1001; i++){
        for(j=0; j<31; j++){
            dp[i][j]=-1;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--)
    {
        readCase();
//        printCase();
//        printf("\n");
        int ans=0;
        for(int i=0; i<G; i++){
            initdp();
            maxWeight=MW[i];
            ans += solve(0,0,0);
            totalPrice=totalPrice+max;
//            printf("%d\n",max);
            max=0;
        }

        printf("%d\n",ans);
        totalPrice=0;
    }
}





