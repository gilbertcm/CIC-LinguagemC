#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int qtd_paises;
    int *num_infectados, *num_recuperados; 
    char **pais;


    printf("Digite a quantidade de paises: ");
    scanf("%d", &qtd_paises);

    num_infectados =  (int*)(malloc(qtd_paises * sizeof(int)));
    num_recuperados =  (int*)(malloc(qtd_paises * sizeof(int)));
    pais =  (char**)(malloc(qtd_paises * sizeof(char*)));

    if (pais == NULL || num_infectados == NULL || num_recuperados == NULL)
    {
        printf("Estouro de memória\n");
        exit(1);
    }

    for ( i = 0; i < qtd_paises; i++)
    {
        pais[i] = (char*)(malloc(30 * sizeof(char*))); 
    }
    

    for ( i = 0; i < qtd_paises; i++)
    {
        printf("Digite o nome do pais: ");
        scanf("%s", pais[i]);

        printf("Digite o numero de infectados: ");
        scanf("%d", &num_infectados[i]);
        
        printf("Digite o numero de recuperados: ");
        scanf("%d", &num_recuperados[i]);
    }

        printf("\nDados: \n\n");

        for(i = 0; i < qtd_paises; i++)
        {
            printf("Pais: %s\n", pais[i]);
            printf("Numero de Infectados Pela Covid: %d\n", num_infectados[i]);
            printf("Numero de Recuperados: %d\n", num_recuperados[i]);
            printf("=============================================\n");
        }

        for(i = 0; i < qtd_paises; i++)
        {
            if(num_infectados[i] < 30000)
            {
            printf("Pais: %s, Infectados: %d\n", pais[i], num_infectados[i]);
            }
            if ( num_recuperados[i] > 25000)
            {
                printf("Pais: %s, Recuperados: %d\n", pais[i], num_recuperados[i]);
            }
            
    }
    



    free(pais);
    free(num_infectados);
    free(num_recuperados);
    return 0;
}