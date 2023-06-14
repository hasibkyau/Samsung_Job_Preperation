#include <stdio.h>
#include <string.h>

int N;
char str[100], map[10][100];
int ans=0;



void treeGen(int len)
{
    int depth=-1;
    for(int i=0; i<len; i++)
    {
        if(str[i]=='(')
        {
            depth++;
            map[depth][i]='(';
        }
        else if(str[i]==')')
        {
            depth--;
            map[depth][i]=')';
        }
        else
        {
            map[depth][i]=str[i];
        }
    }

}

void solve(int len)
{
    int start=1;
    int temp=0;
    for(int i=0; i<len; i++)
    {
        if(map[N][i]=='(' )
        {
            start=1;
            continue;
        }
        else if(map[N][i]==')')
        {
            start=0;
            ans+=temp;
            temp=0;//new digit
            continue;
        }
        if(map[N][i]-'0'>=0){
            temp = (temp*10) + map[N][i]-'0';
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d %s",&N, str);
    int len=strlen(str);
    treeGen(len);
//    printTree(len);
    solve(len);
    printf("%d\n",ans);
}
