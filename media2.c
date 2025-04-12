#include <stdio.h>

int main() {
    float n1, n2;
    printf("");
    scanf("%f", &n1);
    printf("");
    scanf("%f", &n2);
    float media = ((n1 * 3.5) + (n2 * 7.5)) / (3.5 + 7.5);
    printf("MEDIA = %.5f\n", media);
    return 0;
}