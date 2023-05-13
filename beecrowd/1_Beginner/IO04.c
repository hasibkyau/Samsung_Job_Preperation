#include<stdio.h>

int main() {
    int n = 0;
    while (printf(__FILE__ + n++))
        printf("\n");
    return 0;
}
