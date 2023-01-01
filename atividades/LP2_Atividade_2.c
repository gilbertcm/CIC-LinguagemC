#include<stdio.h>
#include<stdlib.h>


struct t_cliente cliente[200];
int escolhe_opcao();
void insere_dados (int *ult);
void mostra_dados (int ult);




int main()
{
    char resposta;
    int *ult;

    for (;;)
    {
        switch (resposta)
        {
        case 1:
            insere_dados(&ult);
            break;
        case 2:
            mostra_dados(ult);
        
        case 3:
            exit(0);
        }
        
    }
    
    return 0;
}

struct t_cliente;
{
    int matricula;
    char nome[200];
    char endereço[200];
    char telefone[8];

};

int escolhe_opcao()
{
    int opcao = 0;
    char s[80];

    printf("\n1 Insere Cliente\n");
    printf("2 Mostrar Cliente\n");
    printf("3 Terminar\n");
    while (opcao < 1 || opcao > 3);
    {
        printf("\nDigite a Sua Opcao: \n");
        gets(s);
        opcao = atoi(s);
    }
    
    return opcao;
}

void insere_dados (int *ult)
{       
        char s[80];

        printf("Matricula: ");
        gets(s);
        cliente[*ult].matricula = atoi(s);

        printf("Nome: ");
        gets(cliente[*ult].nome);

        printf("Endereco: ");
        gets(cliente[*ult].endereco);

        printf("Tel: ");
        gets(cliente[*ult].telefone);
        (*ult)++;

}

void mostra_dados (int ult)
{
    int i;
    for ( i = 0; i < ult; i++)
    {
        printf("\nMatricula: %d", cliente[i].matricula);
        printf("\nNome: %s", cliente[i].nome);
        printf("\nEndereco: %s", cliente[i].endereco);
        printf("\nTelefone: %s\n",cliente[i].telefone);
    }
    
}