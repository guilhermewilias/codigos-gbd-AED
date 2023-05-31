/******************************************************************************

Guilherme sousa - 08.02.23 - Aula #1 AED
Exemplo #1

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c, num_maior ;
    printf ("Digite o primeiro numero : ");
    scanf ("%d", &a);
    
    printf ("Digite o segundo numero : ");
    scanf ("%d",&b);
    
    printf ("Digite o terceiro numero : ");
    scanf ("%d",&c);
    
    num_maior = a;
    
    if (b > num_maior) num_maior = b;
    
    if (c > num_maior) num_maior = c;
    
    printf ("O maior numero é : %d", num_maior);
    
    
    
    
    

    return 0;
}

