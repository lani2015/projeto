#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[50];
    int vogais = 0, consoantes = 0, i = 0;

    printf("Digite uma palavra (max 49 caracteres): ");
    scanf("%49s", palavra);

    while (palavra[i] != '\0') {
        char c = tolower(palavra[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
        i++;
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
