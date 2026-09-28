#include <stdio.h>

int main() {
    int n, i;
    float num, soma = 0, maior, menor;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &num);

        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
        soma += num;
    }

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / n);

    return 0;
}
