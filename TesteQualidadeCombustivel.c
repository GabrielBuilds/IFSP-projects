// Classifica o grau da gasolina (A, B, C ou D) através de testes de pureza, octanagem e teor de enxofre.
#include <stdio.h>

int main()
{
    float pureza, octanagem, enxofre;

    printf("===BEM VINDO!===\n");
    printf("TESTE DE COMBUSTIVEL\n");

    printf("\nInforme a pureza dela: ");
    scanf(" %f", &pureza);
    printf("\nInforme o nivel de octanagem: ");
    scanf(" %f", &octanagem);
    printf("\nInforme o teor de enxofre em ppm: ");
    scanf(" %f", &enxofre);

    if (pureza > 90 ){
        if (octanagem > 85 && enxofre < 50){
            printf("Gasolina Grau A");
        } 
        else if (octanagem > 85 && enxofre >= 50){
            printf("Gasolina Grau B");
        }
        else{printf("Gasolina Grau C");}
    }else
    {printf("Gasolina Grau D");}
    return 0;
}
