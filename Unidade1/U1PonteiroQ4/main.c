#include <stdio.h>

int main()
{
    //  Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
      int i=5,j=7;
      int *p,*q;

       // ilegal
    //    p = i;

        // legal
        q = &j;

        //legal
        p = &*&i;

        //ilegal
    //    i = (*&)j;

        //legal;
        i = *&j;

        //legal
        i = *&*&j;

        //legal mas nao util
        q = *p;

        //legal
        i = (*p)++ + *q;

}
