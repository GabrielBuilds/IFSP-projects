///Um programa que verifica a quantidade de dias trabalhados e o valor que o funcionario recebe na diaria e imprime se ele é apito a receber uma cesta

#include <stdio.h>

int main()
{
    int dias;
    float diaria,resultado;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%i", &dias);

    printf("Digite o valor da diaria: ");
    scanf("%f", &diaria);

    resultado = dias * diaria;
    if(resultado > 1500){
        printf("Nao merece a cesta basica");
    }else{
        printf("Voce merece a cesta basica");}
    return 0;
}
