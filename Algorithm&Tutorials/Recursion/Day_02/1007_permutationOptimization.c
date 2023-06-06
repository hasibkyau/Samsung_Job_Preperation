#include <stdio.h>

int N, A[100], count=0;
void print()
{
    int n=N-1;
    int sum=(n*(n+1))/2; //divergent
//    printf("sum: %d\n",sum);

    for(int i=0; i<N; i++)
    {
        int tmp=A[i];
        for(int j=i+1; j<N; j++)
        {
            count++;
            if(A[i] == A[j])
            {
                return;
            }
            tmp=tmp+A[j];
        }
//        printf("tmp: %d\n",tmp);
        if(i==0 && tmp != sum) return;

    }



    for(int i=0; i<N; i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");
}

void solve(int i)
{
    if(i==N)
    {
        print();
        return;
    }
    for(int j=0; j<N; j++)
    {
        A[i] = j;
        solve(i+1);
    }
}


int main()
{
//    freopen("output2.txt", "w", stdout);
    scanf("%d", &N);
    solve(0);
    printf("Count = %d\n", count);
    return 0;
}






