#include <stdio.h>

int main() {
    double A = 0, B = 0, C = 0;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (((A + B) > C) && ((A + C) > B) && ((B + C) > A)) {
        double perimetro;
        perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        float area;
        area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}