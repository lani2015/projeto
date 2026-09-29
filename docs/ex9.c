#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, proximo;

    printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
    scanf("%d", &n);

    printf("Sequencia: ");
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
        printf("%lld ", proximo);
    }
    printf("\n");

    return 0;
}
