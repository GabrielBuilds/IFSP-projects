// Calcula a quantidade de meses necessária para finalizar o plantio total de mudas com base em uma meta mensal.
#include <stdio.h>

int main()
{
    int MudasDoadas, MudasMensais, Resultado;
    printf("Digite a quantidade de mudas doadas: ");
    scanf("%i", &MudasDoadas);

    printf("Quantas mudas foram plantadas no mes? ");
    scanf("%i", &MudasMensais);

    Resultado = MudasDoadas / MudasMensais;

    printf("Sera necessario %i meses para o plantio das mudas", Resultado);


}
