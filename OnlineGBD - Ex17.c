/******************************************************************************

Ex 3 - 29/03/23 - Guilherme Wilias

*******************************************************************************/
#include <stdio.h>
int posMaior(int, int, int);

int main(){
	
	int x, y, z;
	printf ("Digite o primeiro numero : \n");
	scanf("%d", &x);
	
	printf ("\nDigite o segundo numero : \n");
	scanf("%d", &y);
	
	printf ("Digite o terceiro numero : \n");
	scanf("%d", &z);
	
	printf("\nO maior numero com maior valor esta na posicao %d", posMaior(x, y, z));

	return 0;
}

int posMaior(int x, int y, int z){
	if(x>y && x>z)
		return 1;
	else if(y>x && y>z)
		return 2;
	else
		return 3;
}

