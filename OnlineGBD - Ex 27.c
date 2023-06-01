#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int totalFaltas = 0;
printf("Entre com o total de faltas da disciplina:\n");
printf("ou 999 p/encerrar!\n");
scanf("%d",&totalFaltas);
if (totalFaltas == 999)
{
printf("Grato por usar o programa...\n");
return -1;
}

if (totalFaltas > 20)
{
printf("Estudante reprovado por faltas...");
printf("Limite de Faltas: " + 20);
printf("Total de Faltas do estudante: %d", totalFaltas);
return -1;
}

double notaP1, notaP2, notaP3;

printf("Entre com a Nota P1:\n");
scanf("%lf",&notaP1);

printf("Entre com a Nota P2:\n");
scanf("%lf",&notaP2);

printf("Entre com a Nota P3:\n");

scanf("%lf",&notaP3);

printf("Notas entradas pelo usuário:\n");
printf("Nota P1: %f\n" , notaP1);
printf("Nota P2: %f\n" , notaP2);

printf("Nota P3: %f\n" , notaP3);

double media = 0.0;
media = (notaP1 + notaP2 + notaP3) / 3.0;
printf("\n\nMédia: %f\n", media);

if (media >= 6.0)
printf("Aprovado...\n");
else
printf("Estudante Reprovado por Nota...\n");
printf("Total de Faltas: %d" , totalFaltas);

}
