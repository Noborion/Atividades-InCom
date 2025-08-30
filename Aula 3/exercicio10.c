//Calculo de media ponderada de nota com feedback de aprovacao

#include <stdio.h>
#include <math.h>

main(){
    float trabalho, avaliacao, exame, media;
    printf(" Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &trabalho);
    printf(" Digite a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);
    printf(" Digite a nota do exame final: ");
    scanf("%f", &exame);
    
    media = (0.2 * trabalho)+(0.3 * avaliacao)+(0.5 * exame);

    if(media < 3){
        printf("Reprovado.");
    }else{
        if((media >= 3) && (media < 5)){
            printf("Recuperacao.");
        }else{
            printf("Aprovado.");
        };
    };
}


