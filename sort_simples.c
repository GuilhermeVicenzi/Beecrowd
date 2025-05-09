#include <stdio.h>

int main() {
    int n1, n2, n3;
    int maior, menor, intermediario;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        maior = n1;
        if (n2 > n3) {
            menor = n3;
            intermediario = n2;
        } else {
            menor = n2;
            intermediario = n3;
        }
    } else if (n2 > n1 && n2 > n3) {
        maior = n2;
        if (n1 > n3) {
            menor = n3;
            intermediario = n1;
        } else {
            menor = n1;
            intermediario = n3;
        }
    } else {
        maior = n3;
        if (n1 > n2) {
            menor = n2;
            intermediario = n1;
        } else {
            menor = n1;
            intermediario = n2;
        }
    }

    printf("%d\n%d\n%d\n\n", menor, intermediario, maior);
    printf("%d\n%d\n%d\n", n1, n2, n3);

    return 0;
}