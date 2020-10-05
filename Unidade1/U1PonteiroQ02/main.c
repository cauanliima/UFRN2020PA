#include <stdio.h>

int main()
{

    //Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.
    // 4094 em hexadecimal e ffe

    int i=5, *p;
    p = &i;

    // EnderecoDei i+2 i i*3 i+4
    //ffe 7 5 15 9
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);


}
