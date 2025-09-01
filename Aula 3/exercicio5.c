#include <stdio.h>
#include <math.h>

int main(){
    int x; float raiz2; float pot2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&x);
    raiz2 = sqrt(x);
    pot2 = pow(x,2);
    if(x > 0){
        printf("Raiz: %f", raiz2);
    }else{
        printf("Potencia: %f", pot2);
    }
    return 0;
}    