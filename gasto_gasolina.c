#include <stdio.h>

int main() {
    int T, S;
    int R = 12;

    scanf("%d", &T);
    scanf("%d", &S);

    float D = T * S;
    float C = D / R;
    
    printf("%.3f\n", C);

    return 0;
}