#include <stdio.h>

int main (){
	int lado1, area;
	
	printf ("Entre com o valor do lado do quadrado : ");
	scanf ("\n%d", &lado1);
	
	area = lado1 * lado1 ;
	printf ("\nValor do lado que usuario entrou -> %d ", lado1 );
	printf ("\nValor da area do quadrado = %d ", area);
	
	return 0; 
}
