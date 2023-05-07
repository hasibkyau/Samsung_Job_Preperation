#include <stdio.h>
#include <math.h>
#include <string.h>

double ln(double x) { return log(x); }

int main()
{

    char line[500];
    scanf("%[^\n]",line);
//    printf("%s",line);

    int len=strlen(line);

    if(len<=80) printf("YES\n");
    else printf("NO\n");

    return 0;
}




