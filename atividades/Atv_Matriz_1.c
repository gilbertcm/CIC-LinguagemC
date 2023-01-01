#include<stdio.h>
#include<stdlib.h>

/*Fazer um programa usando um vetor (matriz) que leia
10 notas de alunos e forneça a média da turma.*/

#define qtd_notas 10 // Diretiva do pré-processador (MACRO)

int main(void)
{
    float nota[qtd_notas];
    float soma_notas = 0;
    int i;

    for ( i = 0; i < qtd_notas; i++)
    {
        printf("digite a %d nota: ", i+1);
        scanf("%f", &nota[i]);
    }
    for ( i = 0; i < qtd_notas; i++)
    {
        soma_notas = soma_notas = nota[i];
    }
    
        printf("a media da turma e: %2.f\n", soma_notas/10);

    return 0;
}

