/******************************************************************************
Exercicio 01
Guilherme Wilias Lucca Sousa
2an - cc - 22/03/23

*******************************************************************************/
#include <stdio.h>
int leia();
int formaTri();
void mostraTri();

int main()
{
    printf("Digite os 3 lados : \n");
    
    int a = leia(), b = leia(), c = leia ();
    
    
    if (formaTri(a,b,c)){
        printf("Estes valores formam um triângulo ");
    } 
    else{
        printf("Estes valores não formam um triângulo");
        return 0;
    }
    
    mostraTri(a,b,c);
    
    return 0;
}

int leia(){
    int num;
    scanf("%d", &num);
    
    while(num <= 0){
        printf("Numero inválido, Digite um número maior que 0 :\n");
        scanf("%d", &num);
        
    }
        
    return num;
}

int formaTri(int a,int b,int c){
    
    return(a + b > c && b + c > a && a + c > b);
}

    void mostraTri(int a, int b, int c){
    
    //escaleno - equilatero - isosceles 
    
    if (a == b && b == c){
        printf("equilátero !");
    }else{
        if(a == b || a == c || c == b){
            printf("isosceles !");
        }else{
        printf("escaleno !");
        }
    }
    }
