#include <stdio.h>

int main()
{

    // Seja o seguinte trecho de programa:

    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

printf("%d \n",3 - *p/(*q) + 7);

/*
 *
    Questao 2

        Determine o valor das seguintes expressões:

        p == &i;
        *p - *q;
        **&p;
        3 - *p/(*q) + 7;

    Teste logico que retorna 1 porque p que é um ponteiro, armazena o enderedo de i (&i)
    p == &i;

    Local onde p aponta (i=3) menos local onde q aponta (j=5) = -2
    *p - *q;

    Um ponteiro tem um enderedo que aponta para ele mesmo *&p
    Ele mesmo quarda o endereco de um int
    Desreferencia-lo aponta para o int i=3
    **&p;


    3 - int(3/5) + 7 = 10
    3 - *p/(*q) + 7;
*/

}
