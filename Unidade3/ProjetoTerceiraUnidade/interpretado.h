#ifndef INTERPRETADO_H
#define INTERPRETADO_H

#include <vector>
#include "figurageometrica.h"

class Interpretado
{

    int dimX,dimY,dimZ;

    int Xi,Yi,Zi,Xf,Yf,Zf,rA,rB,rC;
    float r,g,b,a;

    public:

    Interpretado();
    std::vector<FiguraGeometrica *> parse(char *filename);

    inline int getDimX(){return dimX;}
    inline int getDimY(){return dimY;}
    inline int getDimZ(){return dimZ;}
};

#endif // INTERPRETADO_H
