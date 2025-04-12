#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159;
    double r;
    scanf("%lf", &r);

    double v = (4/3.0) * pi * (pow(r, 3));
    printf("VOLUME = %.3lf\n", v);
    return 0;
}