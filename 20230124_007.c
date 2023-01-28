#include <stdio.h>

int main() {
    int n, face, casos[6] = {0};
    printf("Insira o número de lançamentos do dado: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Insira o resultado do lançamento %d: ", i+1);
        scanf("%d", &face);
        casos[face-1]++;
    }

    for (int i = 0; i < 6; i++) {
        printf("Casos da face %d: %d\n", i+1, casos[i]);
    }

    return 0;
}
