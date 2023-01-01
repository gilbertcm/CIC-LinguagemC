#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int ** alocaMemoriaELeitura ( int x, int y, int **array);
int ** matrizTransposta ( int **matriz, int **mTransposta, int x, int y);
void  maior ( int **array, int x, int y);

int  main ( void ){
    int i, j, m, n, **matriz, **mTransposta;

    printf ( " Digite o valor de N: " );
    scanf ( " %d " , &n);
    printf ( " Digite o valor de M: " );
    scanf ( " %d " , &m);

    matriz = alocaMemoriaELeitura (n, m, matriz);
    mTransposta = matrizTransposta (matriz, mTransposta, n, m);

    for (i = 0 ; i < n; i++){
        for (j = 0 ; j < m; j++){
            printf ( " %d    " , matriz[i][j]);
        }
        printf ( " \n " );
    }

    printf ( " \n " );

    for (i = 0 ; i < m; i++){
        for (j = 0 ; j < n; j++){
            printf ( " %d    " , mTransposta[i][j]);
        }
        printf ( " \n " );
    }

    maior (matriz, n, m);

    return 0;
}

int ** alocaMemoriaELeitura ( int x, int y, int **array){
    array = ( int **) malloc (x * sizeof ( int *));
    int i, j;

    for (i = 0 ; i < x; i++){
        array[i] = ( int *) malloc (y * sizeof ( int ));
    }

    for (i = 0 ; i < x; i++){
        for (j = 0 ; j < y; j++){
            printf ( " Digite o valor[ %d ][ %d ]: " , i, j);
            scanf ( " %d " , &array[i][j]);
        }
    }

    // matriz_de_retorno;
}

int ** matrizTransposta ( int **matriz, int **mTransposta, int x, int y){
    mTransposta = ( int **) malloc (y * sizeof ( int *));
    int i, j;

    for (i = 0 ; i < y; i++){
        mTransposta[i] = ( int *) malloc (x * sizeof ( int ));
    }

    for (i = 0 ; i < y; i++){
        for (j = 0 ; j < x; j++){
            mTransposta[i][j] = matriz[j][i];
        }
    }

    return mTransposta;
}

void  maior ( int **array, int x, int y){
    int p, i, j, maior[ 3 ] = {INT_MIN, INT_MIN, INT_MIN}, linha[ 3 ], coluna[ 3 ];

    for (p = 0 ; p < 3 ; p++){
        for (i = 0 ; i < x; i++){
            for (j = 0 ; j < y; j++){
                if ((array[i][j] > maior[p]) && (array[i][j] != maior[ 0 ]) && (array[i][j] != maior[ 1 ]) && ( array[i][j] != maior[ 2 ])){
                    maior[p] = array[i][j];
                    linha[p] = i;
                    coluna[p] = j;
                }
            }
        }
    }
    for (i = 0 ; i < 3 ; i++){
        printf ( " Maior numero foi %d na coluna %d linha %d \n " , maior[i], coluna[i], linha[i]);
    }
}