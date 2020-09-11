#include <stdio.h>
#include "frac.h"

int main(){
    
    //Frações
    fracao primeiro, segundo; 
    printf("\n=========================================");
    
    printf("\n[SISTEMA] Por favor, digite o numerador da 1º fração: ");
    scanf("%d", &primeiro.nominador);

    printf("\n[SISTEMA] Por favor, digite o denomidanor da 1º fração: ");
    scanf("%d", &primeiro.denominador);

    printf("\n=========================================");

    printf("\n[SISTEMA] Por favor, digite o numerador da 2º fração: "); 
    scanf("%d", &segundo.nominador);

    printf("\n[SISTEMA] Por favor, digite o denomidanor da 2º fração: ");
    scanf("%d", &segundo.denominador);

    printf("\n=========================================");
    int op;

    printf("\n\n[SISTEMA] Por favor escolha a operacao desejada: ");
    printf("\n=========================================");
    printf("\n1 - Soma: ");
    printf("\n2 - Subtração: ");
    printf("\n3 - Divisão: ");
    printf("\n4 - Multiplicação: ");
    printf("\n5 - Verificar Igualdade: ");
    printf("\n=========================================\n");
    scanf("%d", &op);

    switch(op){
      case 1:
        printf("\nO resultado da Soma é %d/%d \n",soma(primeiro,segundo).nominador, soma(primeiro,segundo).denominador);
        break;
      case 2:
        printf("\nO resultado da Subtração é %d/%d\n",subtracao(primeiro,segundo).nominador, subtracao(primeiro,segundo).denominador);
        break;
      case 3:
        printf("\nO resultado da Divisão é %d/%d\n",divisao(primeiro,segundo).nominador, divisao(primeiro,segundo).denominador);
        break;
      case 4:
        printf("\nO resultado da Multiplicação é %d/%d\n",multiplicacao(primeiro,segundo).nominador, divisao(primeiro,segundo).denominador);
        break;
      case 5:
        printf("\nO resultado da Igualdade é %d\n",  igual(primeiro,segundo));
        break;
      default:
        printf("\n[SISTEMA] Operação não encontrada.");
        break;
    }

    printf("\n\nAplicação desenvolvida por Thiago Souza, OBRIGADO POR UTILIZÁ-LA! :) ");

    return 0;
}