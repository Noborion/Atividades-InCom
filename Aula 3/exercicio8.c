#include <stdio.h>
#include <math.h>

int main(){
    int anonasc; int anoatual; int idade;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anonasc);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    idade = anoatual - anonasc;
    if(idade > 18){
        printf("Voce pode ir no Inter.");
    }
    return 0;
}   