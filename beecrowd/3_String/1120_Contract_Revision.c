#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    while(1)
    {
        char A[1], B[1000];
        scanf("%s %s", A, B);

        if(!strcmp(A,B) && A[0]=='0'){
            break;
        }

        int len=strlen(B);
        char res[len];

        int flag=1, sum=0;
        for(int i=0; i<len; i++)
        {
            if(B[i] != A[0]){
                sum = sum + (B[i] - '0');
                if(sum!=0){
                   printf("%c",B[i]);
                   flag=0;
                }
            }
        }
        if(flag) printf("0");
        printf("\n");
    }
    return 0;
}









