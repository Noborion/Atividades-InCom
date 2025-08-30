#include <stdio.h>
#include <math.h>

int main(){
    int salario; int prest;
    printf("Digite seu salario: ");
    scanf("%d", &salario);
    printf("Digite o valor da prestacao a pagar:");
    scanf("%d", &prest);
    if(prest > (0.2 * salario)){
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
    }
    return 0;
}    
    