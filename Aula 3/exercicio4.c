Atv 4

#include <stdio.h>
#include <stdio.h>

int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("O numero digitado e par.");
    }else{
        printf("O numero digitado e impar.");
    }
    return 0;
}    