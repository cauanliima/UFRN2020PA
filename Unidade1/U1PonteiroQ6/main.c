#include <stdio.h>

int main()
{

   // Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciamvalor do terceiro
   //elemento do vetor?

 int pulo[4]={1,2,3,4};

    *(pulo + 2);// Resp
    *(pulo + 4);
    pulo + 4;
    pulo + 2;   // Resp

    printf("Aqui temos um exemplo %d \n",*(pulo + 2));

    return 0;
}
