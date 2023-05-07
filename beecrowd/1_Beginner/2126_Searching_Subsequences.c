#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char N1[20], N2[50];
    int caso=1;
    while(scanf("%s", N1) != EOF){
        scanf("%s", N2);
        int len1 = strlen(N1);
        int len2 = strlen(N2);
        int contigous = 1;
        int count=0;
        int pos =0;

        for(int i=0; i<len2; i++){
            for(int j=0; j<len1; j++){
                if(N1[j] != N2[i+j]){
                    contigous=0;
                    break;
                }
                else{
                    pos=i;
                }

            }
            if(contigous) count++;
            else contigous=1;
        }
        printf("Caso #%d:\n", caso);
        if(count==0){
            printf("Nao existe subsequencia\n");
        }
        else{
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", pos+1);
        }
        printf("\n");

        caso++;
    }

    return 0;
}





