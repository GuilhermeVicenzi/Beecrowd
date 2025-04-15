#include <stdio.h>

int main() {
    int code, quantity;
    float precos[50] = {4, 4.5, 5, 2, 1.5};

    scanf("%d %d", &code, &quantity);

    float total = quantity * precos[code - 1];
    printf("Total: R$ %.2f\n", total);
    return 0;
}