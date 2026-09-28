#include <stdio.h>

int main() {
    int num, continuar = 1;

    while (continuar == 1) {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Deseja ver outra tabuada? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }

    return 0;
}
