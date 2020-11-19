#include <iostream>
#include "sculptor.h"
#include "string"
#include "iostream"
#include "fstream"
#include "ostream"


int main()
{
    //char v[20]="teste2.txt";

    Sculptor Test(5,5,5);
    Test.writeOFF("teste.txt");
    std::cout<<"Eba";


  // std::fstream teste;
  // teste.open("TesteF.txt");
  // teste<<"fadadsaf";
  // teste.close();



    return 0;
}

