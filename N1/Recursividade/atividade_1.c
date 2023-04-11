#include <stdio.h>

void imprime_pares(int n, int i) {
    if (i > 30) {
        return;
    }
    if (n % 2 == 0) {
        printf("%d ", n);
        imprime_pares(n + 2, i + 1);
    } 
}

int main() {
    imprime_pares(0, 1);
    return 0;
}
