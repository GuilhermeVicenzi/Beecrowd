#include <stdio.h>

int main() {
    int n, wh;
    float ph;
    printf("");
    scanf("%d", &n);
    printf("");
    scanf("%d", &wh);
    printf("");
    scanf("%f", &ph);
    float salary = ph * wh;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, salary);
    return 0;
}