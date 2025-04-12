#include <stdio.h>

int main() {
    float km, l;

    scanf("%f", &km);
    scanf("%f", &l);

    float consumo = km / l;

    printf("%.3f km/l\n", consumo);
    return 0;
}