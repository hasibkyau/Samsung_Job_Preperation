#include<stdio.h>

int main() {
    char ch;
    freopen(__FILE__, "r", stdin);
    while (1 == scanf("%c", &ch))
        printf("%c", ch);
    return 0;
}
