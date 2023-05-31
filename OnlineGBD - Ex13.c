/******************************************************************************

Exercicio #1 - 29/03/23 - Guilherme Wilias Lucca Sousa

*******************************************************************************/
#include <stdio.h>
void muda1 (int n);
void muda2 ();


int main(){
    
    int n=5;
    printf("\nn = %d antes da chamada de muda", n);
    
    n=muda (n);
    printf("\nn = %d depois da chamada de muda", n);
    n=5;
    printf("\nn = %d depois da chamada de muda2", n);
    muda2 (n);
    printf("\nn = %d depois da chamada de muda2", n);
}
    
    int muda(int n){
        n=10;
        printf("\nn = %d dentro da chamada de muda", n);
        return n;
    }

    void muda2(){
        int n=10;
        printf("\nn = %d dentro da chamada de muda2", n);
    }

