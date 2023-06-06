






#include <stdio.h>

int T, N, t, w, d[101], v[101], A[101], max=0, f=0, ans[101];

void solve(int i, int sum, int val){

    int totalTime = w*d[i] + 2*w*d[i];
    if(sum>t){
//        printf("%d",totalTime);
        return;
    }

    if(i==N){
        if(val>=max){
          max=val;
          for(int i=0; i<N; i++){
            ans[i]=A[i];
//            printf("%d ",ans[i]);
          }
//          printf("\n");
        }
//        printf("Time = %d Value = %d\n", sum, val);
        return;
    }


    A[i]=0;
    solve(i+1, sum, val);

    A[i]=1;
    solve(i+1, sum+totalTime, val+v[i]);
}

void readCase()
{

    for(int i=0; i<N; i++)
    {
        scanf("%d %d", &d[i], &v[i]);
    }
}

//void printCase()
//{
//    printf("%d %d\n", t, w);
//    printf("%d\n", N);
//    for(int i=0; i<N; i++)
//    {
//        printf("%d %d\n", d[i], v[i]);
//    }
//}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int flag=0;

    while(2 == scanf("%d %d", &t, &w))
    {
        if(flag==1)printf("\n");
//        scanf("%d %d", &t, &w);
        scanf("%d", &N);
        readCase();
//        printCase();
        solve(0,0,0);
        int res=0;
        for(int i=0; i<N; i++){
            res = res + ans[i];
        }
        printf("%d\n%d\n",max, res);
        for(int i=0; i<N; i++){
            if(1==ans[i]){
                printf("%d %d\n",d[i], v[i]);
            }
        }

        max=0;
        flag=1;


    }
}
