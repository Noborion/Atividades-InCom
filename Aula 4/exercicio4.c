//Exercicio 4
#include <stdio.h>

int main(){
    int mes;
    printf("Digite um numero inteiro de 1 a 12: ");
    scanf("%d", &mes);
    switch(mes){
        case 1: printf("O mes equivalente e Janeiro"); break;
        case 2: printf("O mes equivalente e Fevereiro"); break;
        case 3: printf("O mes equivalente e Marco.");   break;
        case 4: printf("O mes equivalente e Abril.");  break;
        case 5: printf("O mes equivalente e Maio");  break;
        case 6: printf("O mes equivalente e Junho");   break;
        case 7: printf("O mes equivalente e Julho");  break;
        case 8: printf("O mes equivalente e Agosto");  break;
        case 9: printf("O mes equivalente e Setembro");  break;
        case 10: printf("O mes equivalente e Outubro"); break;
        case 11: printf("O mes equivalente e Novembro"); break;
        case 12: printf("O mes equivalente e Dezembro"); break;
    }
}
        