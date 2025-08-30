#include <stdio.h>
//Teste de multiplicdade de um numero inteiro.
int main(){
    int x;
    printf(" Digite um numero inteiro: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("\n O numero digitado e multiplo de 2.");
    };
    if(x % 3 == 0){
        printf("\n O numero digitado e multiplo de 3.");
    };
    if(x % 5 == 0){
        printf("\n O numero digitado e multiplo de 5.");
    };
    return 0;
}