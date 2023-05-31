/******************************************************************************

Guilherme Sousa - 15.02.23 - Aula AED - Lista de exercicios - Exercicio 03


*******************************************************************************/
#include <stdio.h>

int main(){
    
    float salario_fixo , comissao_vendas , valor_vendas, salario_total ;
    int total_carros_vendidos ;
    
    printf ("Total de carros vendidos : ");
    scanf ("%d", &total_carros_vendidos);
    
    printf ("\nValor total das vendas dos carros = ");
    scanf ("%f", &valor_vendas);
    
    printf ("\nValor do salario fixo = R$ ");
    scanf ("%f", &salario_fixo);
    
    printf ("\nValor da comissao = R$ ");
    scanf ("%f", &comissao_vendas);
    
    printf ("O valor recebido pelo total de vendas é = R$  %f", comissao_vendas);
    
    salario_total = salario_fixo + comissao_vendas + valor_vendas * 0.05 ;
    
    printf ("\nO salario total foi = R$ %f", salario_total);
    
    

    
    

    return 0;
}

