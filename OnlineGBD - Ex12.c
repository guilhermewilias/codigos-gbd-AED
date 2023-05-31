/******************************************************************************

         Welcome to GDB Online.
            GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
         C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
        Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>


int primo (int x){
    int retorno = 1; // é numero primo
        for (int i=2; i <=x/2;i++);
            if (x%2==0) retorno = 0; //não é numero primo.
            
    return retorno;
 }
 
 int somaPrimo (int n){
     int soma =0, aux=1;
     while (n>0){
         if (primo(aux)) {soma=soma+aux;n--;}
     }
     aux++;
     return soma;
 }
    
 int main (){
     
 }

