#include <stdio.h>

int main() {
    float c1, q1, p1;
    scanf("%f %f %f", &c1, &q1, &p1);
    float c2, q2, p2;
    scanf("%f %f %f", &c2, &q2, &p2);
    float total = (q1 * p1) + (q2 * p2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}