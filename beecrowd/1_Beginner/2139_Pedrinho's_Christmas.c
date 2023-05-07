#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int month, day, year=2016;

    while(scanf("%d", &month) != EOF){
        scanf("%d", &day);
        if(month == 12 && day == 25) printf("E natal!\n");
        else if(month == 12 && day == 24) printf("E vespera de natal!\n");
        else if(month == 12 && day > 25) printf("Ja passou!\n");
        else if(month == 12 && day < 24) printf("Faltam %d dias para o natal!\n",25-day);
        else if(month == 11) printf("Faltam %d dias para o natal!\n",30+(25-day));
        else if(month == 10) printf("Faltam %d dias para o natal!\n",30+31+ (25-day));
        else if(month == 9) printf("Faltam %d dias para o natal!\n",30+31+30+ (25-day));
        else if(month == 8) printf("Faltam %d dias para o natal!\n",30+31+30+31+ (25-day));
        else if(month == 7) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+ (25-day));
        else if(month == 6) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+30+ (25-day));
        else if(month == 5) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+30+31+ (25-day));
        else if(month == 4) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+30+31+30+ (25-day));
        else if(month == 3) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+30+31+30+31+ (25-day));
        else if(month == 2) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+30+31+30+31+29+ (25-day));
        else if(month == 1) printf("Faltam %d dias para o natal!\n",30+31+30+31+31+30+31+30+31+29+31+ (25-day));



    }

    return 0;
}






