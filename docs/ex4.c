#include <stdio.h>

int main() {
    int i, aprovados = 0, exames = 0, reprovados = 0;
    float n1, n2, media;

    for (i = 1; i <= 10; i++) {
        printf("Aluno %d - Digite as duas notas: ", i);
        scanf("%f %f", &n1, &n2);
        media = (n1 + n2) / 2.0;

        if (media >= 6.0) {
            aprovados++;
        } else if (media >= 4.0) {
            exames++;
        } else {
            reprovados++;
        }
    }

    printf("\n--- Resultado Final ---\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Em Exame: %d\n", exames);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
