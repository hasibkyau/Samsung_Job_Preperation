#include <stdio.h>
#include <math.h>

int N, baloons[101], A[100], count=0, used[100]= {0,}, max=0, burst[11];


void print()
{
    int left=0;
    int right=0;
    int score=0;

    for(int i=0; i<N; i++)
    {
        burst[i]=A[i];
        printf("%d:",burst[i]);
    }
    printf(":\n");

    for(int i=0; i<N; i++){
        if(burst[A[i]]!=-1){
            burst[A[i]]=-1;
            int temp=0;
            int left=0;
            int right=0;
            //find left
            for(int j=A[i]-1; j>=0; j--){
                if(burst[j] != -1){
                    left=baloons[j];
                    break;
                }
            }
            //find right
            for(int j=A[i]+1; j<N; j++){
                if(burst[j]!=-1){
                    right=baloons[j];
                    break;
                }
            }

            //if left & right=0
            if(0==left+right) temp=baloons[A[i]];
            else if(left>0 && right>0) temp=left*right;
            else if(left==0 && right>0) temp=right;
            else if(left>0 && right==0) temp=left;
            score+=temp;
            printf(" L:%d R:%d cost:%d score:%d",left,right,temp,score);

        }
    }


    printf("\n\n");
}

void solve(int i)
{
    if(i==N)
    {
        print();
        return;
    }
    for(int j=0; j<N; j++) if(used[j]==0)
        {
            A[i] = j;
            used[j]=1;
            solve(i+1);
            used[j]=0;
        }
}


int main()
{
    freopen("input.txt", "r", stdin);
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&baloons[i]);
    }
    solve(0);
    printf("%d\n",max);
    return 0;

}










