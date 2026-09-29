#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    do {
        printf("\n--- Calculadora ---\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", n1 + n2);
                break;
            case 2:
                printf("Resultado: %.2f\n", n1 - n2);
                break;
            case 3:
                printf("Resultado: %.2f\n", n1 * n2);
                break;
            case 4:
                if (n2 == 0) {
                    printf("Erro: Divisao por zero nao permitida!\n");
                } else {
                    printf("Resultado: %.2f\n", n1 / n2);
                }
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}
