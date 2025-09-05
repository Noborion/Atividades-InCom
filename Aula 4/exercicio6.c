//Exercicio 6
#include <stdio.h>

int main(){
    int operacao; float x, y, resultado;
    printf("Digite a operacao desejada:\n 1 - Adicao \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n");
    scanf("%d", &operacao);
    printf("Digite dois numeros: "); 
    scanf("%f %f", &x, &y);
    
    switch(operacao){
        case 1: resultado = x + y;
                printf("Resultado: %f", resultado);
                break;
        case 2: resultado = x - y;
                printf("Resultado: %f", resultado);
                break;      
        case 3: resultado = x * y;
                printf("Resultado: %f", resultado);
                break;
        case 4: resultado = x / y;
                if(y==0){
                        printf("Operacao invalida.");
                        return 0;
                }
                printf("Resultado: %f", resultado);
                break;        
    }
}