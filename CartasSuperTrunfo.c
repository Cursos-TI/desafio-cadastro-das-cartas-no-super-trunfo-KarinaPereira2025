#include <stdio.h>

//Desafio Super Trunfo Paises
//Cadastro de Cartas

int main(){

    //Declaracao de variaveis para carta 1

    char Estado1 = 'C'; 
    char Codigo_carta1[10] = "C01";
    char Cidade1[32] = "Belem";
    int Populacao1 = 150000;
    float Area1 = 2250;
    float Pib1 = 25444;
    int Pontoturistico1 = 50;
   
    printf("**Dados da Carta 1**\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da  Carta: %s\n", Codigo_carta1);
    printf("Nome da Cidade:%S\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.3f\n", Area1);
    printf("PIB: %.4f\n", Pib1);
    printf("Pontos Turisticos: %d\n", Pontoturistico1);

     //Calculo da densidade 1
     float Densidade1 = (float) Populacao1 / Area1;
     printf("Densidade1: %.2f\n",Densidade1);

     //Calcular o PIB per capita
     float Pib_per_capita1 = Pib1 / Area1;
     printf("Pib_per_capita1: %.3f\n", Pib_per_capita1);

    //Declaracao de  vaiaveis  carta 2

    char Estado2 = 'D';
    char Codigo_carta2[10] = "D02";
    char Cidade2[32] = "Fortaleza";
    int Populacao2 = 250000;
    float Area2 = 4450;
    float Pib2 = 55666;
    int Pontoturistico2 = 60;

    printf("**Dados da Carta 2**\n");
    printf( "Estado: %c\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigo_carta2);
    printf("Nome da Cidade:%s\n",Cidade2);
    printf("Populacao: %d\n",Populacao2);
    printf("Area:%.3f\n", Area2);
    printf("PIB:%.4f\n", Pib2);
    printf("Pontos Turisticos:%d\n", Pontoturistico2);

    //Calculo da densidade 2 
     float Densidade2 = (float) Populacao2 / Area2;
     printf("Densidade2: %.2f\n",Densidade2);

     //Calcular o PIB per capita 2
     float Pib_per_capita2 = (float) Pib2 / Area2;
     printf("Pib_per_capita2: %.3f\n", Pib_per_capita2);


    return 0;



    
}





    