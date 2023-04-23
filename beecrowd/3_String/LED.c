#include <stdio.h>
#include <string.h>

int main() {
    //freopen("input.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    int total_led[t];

    for(int j=0; j<t; j++){

    char N[2000];
    scanf("%s", N);

    int leds =  0;
    for(int i=0; i<strlen(N); i++){
        switch(N[i]){
            case '1':
                leds += 2;
                break;
            case '2':
                leds += 5;
                break;
            case '3':
                leds += 5;
                break;
            case '4':
                leds += 4;
                break;
            case '5':
                leds += 5;
                break;
            case '6':
                leds += 6;
                break;
            case '7':
                leds += 3;
                break;
            case '8':
                leds += 7;
                break;
            case '9':
                leds += 6;
                break;
            case '0':
                leds += 6;
                break;
            default:
                break;
        }
    }
    //printf("%d leds\n", leds);
    total_led[j] = leds;

}
for(int i=0; i<t; i++){
    printf("%d leds\n", total_led[i]);
}

    return 0;
}
