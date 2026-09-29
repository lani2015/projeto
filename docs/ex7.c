7. #include <stdio.h>

int main() {
    int num, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Nao e primo.\n");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            divisores++;
            break;
        }
    }

    if (divisores == 0) {
        printf("O numero %d e primo.\n", num);
    } else {
        printf("O numero %d nao e primo.\n", num);
    }

    return 0;
}
