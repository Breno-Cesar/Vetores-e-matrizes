#include <stdio.h>

void selection_sort(int v[], int n) {
    int min, t;
    for (int i = 0; i < n-1; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        t = v[min];
        v[min] = arr[i];
        v[i] = t;
    }
}

int main() {
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    printf("Insira os elementos do vetor: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    selection_sort(v, n);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
