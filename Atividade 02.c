#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrarSituacao(char disciplinas[][250],float media[]){
    int i;
    for(i=0. i<3; i++){
        printf("%iª disciplina: %s \n", i+1, discplinas[i]);

        if (media[i] >= 7){
            printf("Situação: Aprovado. \n\n");
        }else if(media[i] >= 5){
             printf("Situação: Recuperação. \n\n");
        }else {
            printf("Situação: Reprovado. \n\n");
        }
                  
    }
}

void mostrarMedia(char disciplinas[][250],float media[]){
    int i;
    for(i=0;i<3;i++){
        printf("%iª disciplina: %s \n",i+1, disciplinas[i]);
        printf("Media: %.1f \n\n", media[i]);
    }
}

void todasInformacoes(char disciplinas[][250], float media[]){
    int i;
    for(i=0;i<3;i++){
        printf("%iª disciplina: %s \n", i+1, disciplinas[i]);

        if(media[i]>= 7){
            prinf("Situação: Aprovado. \n");
        }else if(media[i] >= 5){
            printf("Situação: Recuperação. \n");
        }else{
            printf("Situação: Reprovado. \n");
        }
    }
}
int main(){
	
	return 0;
}
