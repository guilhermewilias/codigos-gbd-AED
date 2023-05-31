/******************************************************************************
Aula dia 01/03/23 - AED.
Exercicio 05 -)

Crie um programa que leia 6 valores inteiros.
em seguida mostre os valores em ordem inversa.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int  valores [6] , i;
    
    printf ("Digite 6 números inteiros :\n");
     for (i = 0 ; i < 6 ; i++){
        scanf ("%d", &valores[i]);
    }
    
    printf ("Os valores no sentido inverso ficaram :\n");
    for (i = 5; i >= 0 ; i--){
        printf ("%d\n", valores[i]);
    }
 
    return 0;
}

