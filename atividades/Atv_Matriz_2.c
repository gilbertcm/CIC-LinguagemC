#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int A[] = {1,3,5,7,9,11,13,15}; // inicialização de matrizes não dimensionadas
    int B[] = {1,1,2,2,3,3,4,4};
    int C[8];
    int i;

    for ( i = 0; i < 8; i++)
    {
        if ((B[i] % 2) == 0)
        {
                C[i] = A[i] * B[i];
        }
            else
        {
                C[i] = A[i] - B[i];

        }
        for ( i = 0; i < 8; i++)
        {
            printf("%d, ", C[i]);
        }
        
    }
    


    return 0;
}