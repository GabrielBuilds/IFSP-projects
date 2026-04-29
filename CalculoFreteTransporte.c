// Calcula o valor total do frete somando as taxas baseadas no peso da carga e na distância percorrida.

#include <stdio.h>

int main()

{
    float PesoDCarga, Distancia, Resultado1, Resultado2;

    printf("Qual eh o peso da carga? ");
    scanf("%f", &PesoDCarga);

    printf("Qual a distancia percorrida?");
    scanf("%f", &Distancia);

    Resultado1 = PesoDCarga * 2.25;
    Resultado2 = Distancia * 3.34;
    
    printf("O valor pago pelo frete sera de R$%.2f", Resultado1 + Resultado2);
}
