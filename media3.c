#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("");
    scanf("%f", &n1);
    printf("");
    scanf("%f", &n2);
    printf("");
    scanf("%f", &n3);
    float media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    printf("MEDIA = %.1f\n", media);
    return 0;
}