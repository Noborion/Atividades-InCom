//Exercicio 9
#include <stdio.h>

int main(){
    int codigo, quant; float v_final, p100, p101, p102, p103;

    p100 = 12.90;
    p101 = 2.00;
    p102 = 14.30;
    p103 = 4.00;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    if(codigo<100 || codigo>103){
        printf("Codigo invalido.");
        return 0;
    }

    switch(codigo){
        case 100:
            printf("Digite a quantidade de pizzas: ");
            break;
        case 101:
            printf("Digite a quantidade de cafes: ");
            break;
        case 102:
            printf("Digite a quantidade de sanduiches: ");
            break;
        case 103:
            printf("Digite a quantidade de sucos: ");
            break;
    };
    scanf("%d", &quant);

    if(quant<0){
        printf("Operacao invalida.");
        return 0;
    }

    switch(codigo){
        case 100:
            v_final = quant * p100;
            printf("Total: %f", v_final);
            break;
        case 101:
            v_final = quant * p101;
            printf("Total: %f", v_final);
            break;
        case 102:
            v_final = quant * p102;
            printf("Total: %f", v_final);
            break;
        case 103:
            v_final = quant * p103;
            printf("Total: %f", v_final);
            break;
        default: 
            printf("Operacao invalida.");
            break;
    }
}