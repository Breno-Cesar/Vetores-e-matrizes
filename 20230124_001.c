#include <stdio.h>

int main()
{
    int n, v[100], i;
    do
    {
    printf("Digite um tamanho menor que 100 para a sequencia: ");
    scanf("%d", &n);
    }
    while(n>=100);
    
    for (i = 0; i < n; i++)
    {
        printf("Digite os numeros da sequencia: ");
        scanf("%d", &v[i]);
    }
    printf("Sequncia inversa: ");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    return 0;
    
}