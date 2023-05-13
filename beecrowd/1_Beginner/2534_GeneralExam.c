#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int N, Q;
    while(scanf("%d %d", &N, &Q) != EOF)
    {
        //Inserting Grade
        int Grade[N], Query[Q];
        for(int i=0; i<N; i++)
        {
            int g;
            scanf("%d", &g);
            Grade[i]=g;
        }


        //Sorting
        for(int i=0; i<N; i++){
            //find the max
            int max=Grade[i], flag=i;
            for(int j=i+1; j<N; j++){
                if(Grade[j]>max){max=Grade[j]; flag=j;}
            }
            int temp=Grade[i];
            Grade[i]=max;
            Grade[flag]=temp;
//            printf("Garde = %d\n",max);
        }

        //Print sorted array
//        for(int i=0; i<N; i++){
//            printf("%d\n",Grade[i]);
//        }

//
//        //Inserting Querry
        for(int i=0; i<Q; i++)
        {
            int q;
            scanf("%d", &q);
            Query[i]=q;
            printf("%d\n",Grade[q-1]);
        }
    }
    return 0;
}




