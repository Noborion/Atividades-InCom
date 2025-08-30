#include <stdio.h>

int main(){
    int x; int y;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &y);
    if(x>y){
        printf("O maior numero digitado foi: %d", x);
    }else{
        printf("O mairo numero digitado foi: %d", y);
    }
    return 0;
}    