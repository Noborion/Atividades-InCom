#include <stdio.h>

int main(){
    int x; int y;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &x);
    printf("Escreva mais um numero inteiro: ");
    scanf("%d", &y);
    if(x==y){
        printf("Os numeros digitados são iguais.");
    }
    return 0;
}