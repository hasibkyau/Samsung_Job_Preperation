#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        char str[100];
        fgets(str, 100, stdin);
        printf("I am Toorg!\n");
    }
    return 0;
}
