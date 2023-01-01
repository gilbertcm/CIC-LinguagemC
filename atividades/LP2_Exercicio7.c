#include<stdio.h>
#include<stdlib.h>

int main()
{
    int qdt_time;
    char **tabela_time;
    int i, j;

    printf("Digite a quantidade de times: ");
    scanf("%d", &qdt_time);

    tabela_time = (char**)(malloc(qdt_time * sizeof(char)));
        if(tabela_time == NULL)
        {
            printf("Estouro de Memoria!");
            exit(1);
        }

    for (i = 0; i < qdt_time; i++)
    {
        tabela_time[i] = ( char *) malloc ( 20 * sizeof ( char *));
        printf("Digite o nome do %d time: ", i+1);
        scanf("%s", tabela_time[i]);
 
    }

    for ( i = 0; i < qdt_time; i++)
    {
        for ( j = i + 1; j < qdt_time; j++)
        {
            printf("%s x %s \n", tabela_time[i], tabela_time[j]);
        }
    }
    
    free(tabela_time);
    return 0;
}