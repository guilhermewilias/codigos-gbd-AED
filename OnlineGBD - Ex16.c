/******************************************************************************

Ex 2 - 29/03/23 - Guilherme Wilias

*******************************************************************************/
#include <stdio.h>

int verificaIntervalo (int x, int minimo, int maximo) {
    return (x>=minimo && x<= maximo);
}

int main()
{
    int x, minimo, maximo;
    printf("Digite x: ");   
    scanf ("%d", &x);
    
    printf("Digite min: "); 
    scanf ("%d", &minimo);
    
    printf("Digite max: ");
    scanf ("%d", &maximo);

    if (verificaIntervalo (x,minimo,maximo)==1 )
        printf ("\nEstá no intervalo");
    else 
        printf ("\nNAO Está no intervalo");
    
    return 0;
}

