#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int *vet;

    vet = (int*)(malloc(375 * sizeof(int)));

    for ( i = 0; i < 375; i++)
    {
        vet[i] = i + 1; //recebe elementos 1 ao 375
    }

    for ( i = 0; i < 375; i++)
    {
        if (i < 30 || i >= 345 )
        {
            printf("%d ", vet[i]); //printa 1 ao 30 do 346 ao 375
        }
        
    }
    
    free(vet);
    return 0;
}