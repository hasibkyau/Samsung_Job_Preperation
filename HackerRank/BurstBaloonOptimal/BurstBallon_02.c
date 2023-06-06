#include <stdio.h>
#include <math.h>

int N, set[101], A[100], count=0, used[100]= {0,}, max, burst[101]= {0,};

int checkLeft(int pos)
{

    for(int i=pos-1; i>=0; i--)
    {
        if(burst[i]==0)
        {
            burst[i]==1;
            return set[i];
        }
    }
    return -1;
}

int checkRight(int pos)
{

    for(int i=pos+1; i<N; i++)
    {
        if(burst[i]==0)
        {
            burst[i]==1;
            return set[i];
        }
    }
    return -1;



}

void print()
{
    int score=0;
    int baloons[N];
    for(int i=0; i<N; i++)
    {
        baloons[i]=set[A[i]];
        if(burst[A[i]]==0)
        {
            int left=checkLeft(A[i]);
            int right=checkRight(A[i]);

            if(-1==left  && -1==right) score+=set[A[i]];
            else if(-1!=left && -1!=right) score+=left*right;
            else if(-1 != left && -1==right) score+=left;
            else if(-1 == left && -1!=right) score+=right;
        }
        if(score>max) max=score;
    }
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

    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&set[i]);
    }
    max=-1;
    solve(0);
    printf("%d\n",max);

}










