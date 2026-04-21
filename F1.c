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
