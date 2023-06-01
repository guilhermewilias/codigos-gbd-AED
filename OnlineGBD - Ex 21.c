#include <stdio.h>

int main (){


int lado1, lado2, area, perimetro;

printf ("Entre com o primeiro numero : ");
scanf ("\n%d", &lado1);

printf ("\nEntre com o segundo numero : ");
scanf ("\n%d", &lado2);

area = lado1 * lado2;
perimetro = (2 * lado1) + (2 * lado2);

printf ("\n\nValores entrados pelo usuario foram -> %d e %d", lado1, lado2);
printf ("\n\nValor da area : %d", area);
printf ("\n\nValor do perimetro : %d", perimetro);

return 0;
}
