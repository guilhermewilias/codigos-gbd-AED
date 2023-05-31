/******************************************************************************

Guilherme Sousa - 08.02.23 - Aula AED - Exemplo 2

*******************************************************************************/
#include <stdio.h>

int main()
{

    int a,b,c,num_maior, var_posicao;
    
    printf ("Digite o primeiro numero : ");
    scanf ("%d", &a);
    
    printf ("Digite o segundo numero : ");
    scanf ("%d", &b);
    
    printf ("Digite o terceiro numero : ");
    scanf ("%d", &c); 
    
    num_maior = a;
    
    if (b > num_maior) num_maior = b;
    if (c > num_maior) num_maior = c;
    
    if (num_maior == a) var_posicao = 1;
    if (num_maior == b) var_posicao = 2;
    if (num_maior == c) var_posicao = 3;
    
    printf ("O maior número é %d, e sua posição é : %d", num_maior, var_posicao);

    return 0;
}

