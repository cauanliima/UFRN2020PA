#include "putsphere.h"

inline float pow2(int x)
{
    return x*x;
}

PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a)
{
    this->xcenter=xcenter;
    this->ycenter=zcenter;
    this->zcenter=zcenter;
    this->radius=radius;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}


void PutSphere::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
        if(radius>0)
        for(int i=xcenter-radius; i<xcenter+radius;i++)
            for(int j=ycenter-radius;j<ycenter+radius;j++)
                for(int k=zcenter-radius;k<zcenter+radius;k++)
                   if((pow2(xcenter-i)+pow2(ycenter-j)+pow2(zcenter-k))<pow2(radius))
                        t.putVoxel(i,j,k);
}

