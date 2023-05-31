/******************************************************************************
aula aed 010323 - gw

Exercicio 4 -)
a) imprima o maior elemento 
b) imprima a posição do maior elemento
*******************************************************************************/
#include <stdio.h>
#define TAM 10
int main(){
    int v[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    maior = v[0];
    // processamento
    for (int i=0; i<TAM; i++) {
        if (v[i]>maior){
            maior = v[i];
            posicao = i;
        }
    

    }
    printf("\nO maior elemento é %d e está na posição %d", maior, posicao);

    return 0;
}

