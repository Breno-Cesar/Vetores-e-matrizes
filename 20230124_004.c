#include <stdio.h>

void numpar(int n, int v[], int vp[], int *tam) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            vp[j] = v[i];
            j++;
        }
    }
    *tam = j;
}

int main() {
    int n, i, num;
    int v[100], vp[100];
    int tam;

    printf("Tamanho da sequencia: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite os numeros: ");
        scanf("%d", &num);
        v[i] = num;
    }

    numpar(n, v, vp, &tam);

    printf("os umeros pares sao: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
