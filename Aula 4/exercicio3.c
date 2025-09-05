//Exercicio 3
#include <stdio.h>

int main(){
    int dia;
    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", &dia);
    switch(dia){
        case 1: printf("O dia equivalente e Domingo."); break;
        case 2: printf("O dia equivalente e Segunda."); break;
        case 3: printf("O dia equivalente e Terca.");   break;
        case 4: printf("O dia equivalente e Quarta.");  break;
        case 5: printf("O dia equivalente e Quinta.");  break;
        case 6: printf("O dia equivalente e Sexta.");  break;
        case 7: printf("O dia equivalente e Sabado.");  break;
    }
}
        