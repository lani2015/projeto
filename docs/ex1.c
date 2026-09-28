#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int p1, p2, p3;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite os tres pesos (ex: 2 3 5): ");
    scanf("%d %d %d", &p1, &p2, &p3);

    if (p1 == 0 || p2 == 0 || p3 == 0) {
        printf("Erro: Nenhum peso pode ser igual a zero!\n");
    } else {
        media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
        printf("Media ponderada: %.2f\n", media);

        if (media >= 6.0) {
            printf("Situacao: Aprovado\n");
        } else if (media >= 4.0) {
            printf("Situacao: Exame\n");
        } else {
            printf("Situacao: Reprovado\n");
        }
    }
    return 0;
}
