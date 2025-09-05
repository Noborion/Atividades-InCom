//Exercicio 2
#include <stdio.h>

int main(){
    float w, x, y, z;
    printf("Digite um numero: ");
    scanf("%f", &w);
    printf("Digite outro numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);    
    printf("Digite outro numero: ");
    scanf("%f", &z);
    if ((w<x)&&(w<y)&&(w<z)){
        printf("O menor numero e: %f", w);
    };
    if ((x<w)&&(x<y)&&(x<z)){
        printf("O menor numero e: %f", x);
    };
    if ((y<w)&&(y<x)&&(y<z)){
        printf("O menor numero e: %f", y);
    };
    if ((z<w)&&(z<x)&&(z<y)){
        printf("O menor numero e: %f", z);
    };
}