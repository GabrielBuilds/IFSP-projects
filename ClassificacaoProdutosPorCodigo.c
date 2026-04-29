// Identifica a categoria de um produto com base em faixas de códigos numéricos predefinidas.
#include <stdio.h>

int main()

{
    int Codigo;

    printf("===DETERMINE O PRODUTO===\n");
    scanf(" %i", &Codigo);

    printf("CODIGO SELECIONADO %i", Codigo);
    
    if (Codigo == 1 || Codigo == 2){
        printf("PRODUTO ALIMENTICIO!\nSELECIONADO");}
    else if (Codigo > 3 || Codigo < 5){
        printf("PRODUTO DE LIMPEZA!\nSELECIONADO");}
    else if (Codigo == 6){
        printf("PRODUTO ELETRONICO!\nSELECIONADO");}
    else if (Codigo == 7 || Codigo == 8){
        printf("PRODUTO DE VESTUARIO!\nSELECIONADO");}
    else if (Codigo > 9 || Codigo < 12){
        printf("PRODUTO DE HIGIENE PESSOAL!\nSELECIONADO");}
    else if (Codigo == 13 || Codigo == 14){
        printf("PRODUTO HOSPITALAR!\nSELECIONADO");}
    else("PRODUTO INVALIDO!");
    
}
