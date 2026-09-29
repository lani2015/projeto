10. #include <stdio.h>

int main() {
    int num, tentativas = 0;

    do {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &num);
        tentativas++;

        if (num < 1 || num > 100) {
            printf("Erro: Valor fora da faixa permitida!\n");
        }
    } while (num < 1 || num > 100);

    printf("Sucesso! Numero valido digitado.\n");
    printf("Total de tentativas: %d\n", tentativas);

    return 0;
}
