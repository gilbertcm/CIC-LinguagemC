#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 20, j;
    int *p;

    p = &i;
    (*p)++;
    j = *p + 12;

    printf("%d e %d\n", i, j);

    return 0;
}