/******************************************************************************

Guilherme Sousa - 15.02.23 - Aula AED - Lista de exercicios - Exercicio 04


*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantidade ;
    float valormaca, valortotal ;
    
    printf ("Digite o numero de macas compradas : ");
    scanf  ("%d", &quantidade); 
    
    if (quantidade < 12)
        valormaca = 1.30;
    else valormaca = 1.00; 

    valortotal = valormaca * quantidade;
    
    printf ("\nO valor da compra foi : %.2f", valortotal);
    
    

    
    

    return 0;
}


