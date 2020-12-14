#include "putellipsoid.h"


PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz,
                           float r, float g, float b, float a)
{
    this->xcenter=xcenter;
    this->ycenter=ycenter;
    this->zcenter=zcenter;
    this->rx=rx;
    this->ry=ry;
    this->rz=rz;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}


inline float pow2(int x)
{
    return x*x;
}

void PutEllipsoid::draw(Sculptor &t)
{

        t.setColor(r,g,b,a);

        for(int i=xcenter-rx; i<xcenter+rx;i++)
            for(int j=ycenter-ry;j<ycenter+ry;j++)
                for(int k=zcenter-rz;k<zcenter+rz;k++)
                    if((pow2(xcenter-i)/pow2(rx)+pow2(ycenter-j)/pow2(ry)+pow2(zcenter-k)/pow2(rz)) < 1)
                        t.putVoxel(i,j,k);


}
