//Exercicio 7
#include <stdio.h>

int main(){
    int codigo; float compra, desc1, desc2, desc3, total;
    printf("Digite o seu codigo de cliente: ");
    scanf("%d", &codigo);
    
    if((codigo<1) || (codigo>3)){
        printf("Codigo inválido.");
        return 0;
    };
    
    printf("Digite o valor total da compra: ");
    scanf("%f", &compra);
    
    desc1 = 0.95; //comum
    desc2 = 0.8;  //funcionario
    desc3 = 0.9;  //vip
    
    switch(codigo){
        case 1:
            total = compra*desc1;
            printf("Total com desconto: R$%f ", total);
            break;
        case 2: 
            total = compra*desc2;
            printf("Total com desconto: R$%f ", total);
            break;
        case 3:
            total = compra*desc3;
            printf("Total com desconto: R$%f ", total);
            break;
    }
    return 0;
}
        