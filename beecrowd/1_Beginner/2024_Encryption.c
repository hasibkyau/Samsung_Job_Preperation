#include <stdio.h>
#include <string.h>

int main()
{
    int N, x, len, k;
    scanf("%d", &N);
    char str[N][1000], temp[1000];

    for(int i =0; i < N; i++)
        scanf("%s", str[i]);


    for(int j =0; j < N; j++)
        //int n=strlen(str[j]);
        //str[strlen(str[j])] = strrev(str[j]);
        strcpy(temp, strrev(str[j]));
        //x = printf("%s\n", str[j]);
        len = strlen(temp);
        for(k=0; k<len/2; k++){
            temp[k] = temp[k]+3;
        }
        for(; k<len; k++){
            temp[k] = temp[k]+2;
        }
        printf("%s", temp);
}
