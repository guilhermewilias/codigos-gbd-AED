/******************************************************************************
Algoritmo e estrutura de dados II - STRUCTS (estruturas e registros).

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{
     float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}


int main() {
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno;
    
    // Entrada de DADOS
    
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno.matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno.N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno.N2);
       
    // Processamento
    
        aluno.media = calculamedia(aluno.N1,aluno.N2);

    // Saída - Impressão do Boletim do Aluno
    
        printf( "\nBOLETIM DO ALUNO\n");
        printf( "\nNota N1: %.1f", aluno.N1);
        printf( "\nNota N2: %.1f", aluno.N2);
        printf( "\nMedia..: %.1f", aluno.media);
       
       return (0);
}

}

