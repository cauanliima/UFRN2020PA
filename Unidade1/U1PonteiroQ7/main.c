#include <stdio.h>

int main()
{
    //7. Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas?
    //Justifique.

    int mat[4]={0,1,2,3}, *p, x;
    p= mat + 1;
    //Como mat aponta para um vetor de int. nao e aceito pela linguagem a alteracao.
    p= mat++;
    p= ++mat;
    x= (*mat)++;

}
