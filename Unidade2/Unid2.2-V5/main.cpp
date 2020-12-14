#include <iostream>
#include "sculptor.h"
#include "string"
#include "iostream"
#include "fstream"
#include "ostream"
#include "strings.h"
#include <sstream>
#include <interpretado.h>
#include "vector"
#include <iostream>



int main()
{
    Sculptor *Escultura;
    Interpretado ImpEscultura;
    std::vector<FiguraGeometrica*> figs;

    Escultura=new Sculptor(ImpEscultura.getDimX(),ImpEscultura.getDimY(),ImpEscultura.getDimZ());
    figs = ImpEscultura.parse("dados.txt");
    for(size_t i=0;i<figs.size();i++)
        figs[i]->draw(*Escultura);
    Escultura->writeOFF("Salvo.off");


    return 0;
}

