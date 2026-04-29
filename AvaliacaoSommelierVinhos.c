// Realiza a classificação de vinhos através de estruturas switch aninhadas, validando níveis de acidez e tipos de aroma.
#include <stdio.h>
#include <ctype.h>

int main() {
    char acidez, aroma;

    printf("=== AVALIACAO DO SOMMELIER ===\n");

    printf("Acidez (A para Alta, N para Normal): ");
    scanf(" %c", &acidez);
    acidez = toupper(acidez);

    printf("Aroma (F-Frutado, L-Floral, M-Amadeirado, O-Outro): ");
    scanf(" %c", &aroma);
    aroma = toupper(aroma);

    switch (acidez) {
        case 'A':
            printf("\nREPROVADO: Acidez muito alta.\n");
            break;

        default: 
            printf("\nAcidez aprovada! Avaliando aroma...\n");

            switch (aroma) {
                case 'F':
                case 'L':
                case 'M':
                    printf("APROVADO: Aroma excelente!\n");
                    break;
                default:
                    printf("REPROVADO: Aroma nao atende aos criterios.\n");
                    break;
            }
            break;
    }

    return 0;
}
