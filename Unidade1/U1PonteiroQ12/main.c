#include <stdio.h>
//    O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
//    escreva um pequeno programa exemplificando o uso deste recurso.

void ponteiro(int a,int *b){
    // a eh passado por copia, nesta funcao alterar o valor de a, nao muda seu valor fora da funcao
    //em b temos o endereco da variavel incerida em b
    a=1;
    *b=2;
    printf("%d,%d",a,*b);
}


int main()
{
int x=9,y=10;

ponteiro(x,&y);
printf("x=%d, y=%d",x,y);

}
