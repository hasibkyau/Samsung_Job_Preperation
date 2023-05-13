#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int T;
    while(scanf("%d",&T)!=EOF)
    {
        //Expressions
        int Exp[T][3];
        for(int i=0; i<T; i++)
        {
            int a, b, c;
            scanf("%d %d=%d", &a, &b, &c);

            Exp[i][0]=a;
            Exp[i][1]=b;
            Exp[i][2]=c;
        }

        int pass=1, fail=1, sum=0, k=0;
        int res[T];
        for(int i=0; i<T; i++){
            res[i]=1;
        }

        //users name & choices
        char name[T][50], Operator;
        int index;
        for(int i=0; i<T; i++)
        {
            char n[50];

            scanf("%s %d %c", n, &index, &Operator);
            strcpy(name[i],n);

            if(Operator=='+' && Exp[index-1][0] + Exp[index-1][1] == Exp[index-1][2])
            {
                sum=sum+1;
                res[i]=1;
            }
            else if(Operator=='-' && Exp[index-1][0] - Exp[index-1][1] == Exp[index-1][2])
            {
                sum=sum+1;
                res[i]=1;
            }
            else if(Operator=='*' && Exp[index-1][0] * Exp[index-1][1] == Exp[index-1][2])
            {
                sum=sum+1;
                res[i]=1;
            }
            else
            {
                res[i]=0;
                k++;
            }
        }

        char F_List[T-sum][50], F=0;
        if(sum==T) printf("You Shall All Pass!\n");
        else if(sum==0) printf("None Shall Pass!\n");
        else
        {
            for(int i=0; i<T; i++)
            {
//                if(res[i]==0) printf("%s ", name[i]);
                if(res[i]==0)
                {
                    strcpy(F_List[F], name[F]);
                    F++;
                }
            }


            // storing strings in the lexicographical order
            char temp_str[50];
            for (int i = 0; i < T-sum; ++i)
            {
                for (int j = i + 1; j < T-sum; ++j)
                {

                    // swapping strings if they are not in the lexicographical order
                    if (strcmp(F_List[i], F_List[j]) > 0)
                    {
                        strcpy(temp_str, F_List[i]);
                        strcpy(F_List[i], F_List[j]);
                        strcpy(F_List[j], temp_str);
                    }
                }
            }

            //Print Output
            for (int i = 0; i < T-sum; ++i)
            {
                printf("%s ",F_List[i]);
            }
            printf("\n");
        }
    }
    return 0;
}







