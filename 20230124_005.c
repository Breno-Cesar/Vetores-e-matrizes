#include <stdio.h>

void calc_factorial(int sequencia[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        int j, factorial = 1;
        for (j = 1; j <= sequencia[i]; j++) {
            factorial *= j;
        }
        sequencia[i] = factorial;
    }
}

int main() {
    int n;
    printf("Insira o tamanho da sequencia: ");
    scanf("%d", &n);
    int sequencia[n];

    printf("Insira os elementos da sequencia: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&sequencia[i]);
    }

    calc_factorial(sequencia, n);

    printf("Sequencia com fatoriais: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sequencia[i]);
    }
    return 0;
}
