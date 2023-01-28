#include <stdio.h>

int produtoEscalar(int x[], int y[], int n) {
    int produto = 0;
    for (int i = 0; i < n; i++) {
        produto += x[i] * y[i];
    }
    return produto;
}

int main() {
    int n, x[100], y[100];
    printf("Insira o tamanho dos vetores: ");
    scanf("%d", &n);
    printf("Insira os elementos do vetor x: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    printf("Insira os elementos do vetor y: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }
    int produto = produtoEscalar(x, y, n);
    printf("Produto escalar dos vetores: %d\n", produto);
    return 0;
}
