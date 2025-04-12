#include <stdio.h>

int main() {
    char n[50];
    double p, ts;
    printf("");
    scanf("%s", n);
    printf("");
    scanf("%lf", &p);
    printf("");
    scanf("%lf", &ts);
    double b = (ts * 0.15);
    double sb = p + b;
    printf("TOTAL = R$ %.2lf\n", sb);  
    return 0;
}