#include <stdio.h>

int main()
{
    //11. Suponha que as seguintes declarações tenham sido realizadas:

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    //Identifique quais dos seguintes comandos é válido ou inválido:

    aloha[2] = value;
    scanf("%f", &aloha);
    //aloha = value; // aloha quarda endereco nao valor
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    //coisas[5] = aloha; //modifica o valor na posicao *(coisas 5*5)
    //pf = value; // pf quarda endereco nao valor
    pf = aloha;

}
