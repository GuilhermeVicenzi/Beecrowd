#include <stdio.h>

int main() {
    int S, M = 0, H = 0;

    scanf("%d", &S);

    if (S >= 60) {
        int resto = S % 60;
        M = S / 60;
        S = resto;
        if (M >= 60) {
            int resto = M % 60;
            H = M / 60;
            M = resto;
        }
    }
    printf("%d:%d:%d\n", H, M, S);
    return 0;
}