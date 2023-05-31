/******************************************************************************

Guilherme Sousa - 15.02.23 - Aula AED - Lista de exercicios - Exercicio 02


*******************************************************************************/
#include <stdio.h>

int main(){

    int voto_nulo, voto_branco, voto_valido, votos_total;
    
    
    
    printf ("Digite o total de votos nulos : ");
    scanf ("%d", &voto_nulo);
    
    printf ("\nDigite o total de votos brancos : ");
    scanf ("%d", &voto_branco);
    
    printf ("\nDigite o total de votos validos : ");
    scanf ("%d", &voto_valido);
    
    votos_total = voto_nulo + voto_branco + voto_valido;
    voto_valido = votos_total - voto_nulo - voto_branco;
    
    printf ("\nVotos totais = %d", votos_total);
    printf ("\nVotos validos foram = %d", voto_valido);
    
    printf ("\n\nPercentual dos votos nulos = %.1f", voto_nulo * 1.0 / votos_total * 100);
    printf ("\nPercentual dos votos brancos = %.1f", voto_branco * 1.0 / votos_total * 100);
    printf ("\nPercentual dos votos validos = %.1f", voto_valido * 1.0 / votos_total * 100);
    
 
    
    

    return 0;
}





