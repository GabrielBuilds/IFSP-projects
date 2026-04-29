// Calcula o consumo médio do veículo e a autonomia restante com base no combustível disponível no tanque.

#include <stdio.h>

int main()
{
    float DistanciaPercorrida, LitrosConsumidos, TanqueTotal = 50.0,ConsumoMedio, AutonomiaRestante, LitrosRestantes;

    printf("Qual foi a distancia percorrida? ");
    scanf("%f", &DistanciaPercorrida);

    printf("Quantos litros de combustivo foram consumidos? ");
    scanf("%f", &LitrosConsumidos);

    ConsumoMedio = DistanciaPercorrida / LitrosConsumidos;

    LitrosRestantes = TanqueTotal - LitrosConsumidos;
    AutonomiaRestante = LitrosRestantes * ConsumoMedio;

    printf("Consumo medio: %.2f Km/L\n", ConsumoMedio);
    printf("Autonomia Restante: %.2f Km/L", AutonomiaRestante);
    
    return 0;
}
