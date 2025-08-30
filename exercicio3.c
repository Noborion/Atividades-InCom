#include <stdio.h>

int main(){
    int x; int y; int soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &y);
    soma=x+y;
    printf("Soma: %d \n", soma);
    if(x>y){
        printf("O maior e menor numero sao, respectivamente: %d, %d", x, y);
    }else{
        printf("O maior e menor numero sao, respectivamente: %d, %d", y, x);
    }
    return 0;
}    