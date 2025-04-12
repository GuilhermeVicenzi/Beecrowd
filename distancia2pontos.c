#include <stdio.h>
#include <math.h>

int main() {
    double X1, X2, Y1, Y2;

    scanf("%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2);

    double diff_x = X2 - X1;
    double diff_y = Y2 - Y1;

    double distancia = sqrt(pow((diff_x), 2) + pow((diff_y), 2));

    printf("%.4f\n", distancia);
    return 0;
}