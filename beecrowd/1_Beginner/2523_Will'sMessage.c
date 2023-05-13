#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char str[26];
    while(scanf("%s", str) != EOF)
    {
        int N;
        scanf("%d", &N);

        for(int i=0; i<N; i++)
        {
            int index;
            scanf("%d", &index);
            printf("%c", str[index-1]);
        }
        printf("\n");
    }
    return 0;
}


