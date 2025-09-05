//Exercicio 8
#include <stdio.h>

int main(){
    int codigo; float financiamento, j1, j2, j3, v_final;
    printf("Digite o codigo do tipo de financiamento: ");
    scanf("%d", &codigo);
    
    if((codigo<1) || (codigo>3)){
        printf("Codigo inválido.");
        return 0;
    };
    
    printf("Digite o valor a ser financiado: ");
    scanf("%f", &financiamento);
    
    j1 = 1.3; //básico
    j2 = 1.32;  //intermediário
    j3 = 1.35;  //avançado
    
    switch(codigo){
        case 1:
            v_final = financiamento*j1;
            printf("A taxa aplicada foi: %f \nValor a ser pago: %f", j1, v_final);
            break;
        case 2: 
            v_final = financiamento*j2;
            printf("A taxa aplicada foi: %f \nValor a ser pago: %f", j2, v_final);
            break;
        case 3:
            v_final = financiamento*j3;
            printf("A taxa aplicada foi: %f \nValor a ser pago: %f", j3, v_final);
            break;
    }
    return 0;
}
        