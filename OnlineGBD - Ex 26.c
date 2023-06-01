#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
int n;
printf("Entre com um número inteiro positivo qualquer: \n");
scanf("%d", &n);

int i;
for(i = 2; i < n; i++) {
if (n%i == 0) {
printf("%d não é um número primo...\n", n);
return -1;
}
}
printf("%d é um número primo...\n", n);
return 0;
}
