#include <stdio.h>

void sequencia_inv(int n, int v[]) {
    int i;
    for (i = n-1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
}

int main() {
    int n, i, num;
    int v[100];
    do
    {
        printf("Digite um tamanho para a sequencia menor que 100: ");
        scanf("%d", &n);
    } while (n>=100);
    for (i = 0; i < n; i++) {
        printf("Digite a sequencia de numeros: ");
        scanf("%d", &num);
        v[i] = num;
    }

    printf("A sequencia reversa e: ");
    sequencia_inv(n, v);
    return 0;
}