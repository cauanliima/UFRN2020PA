#include "cutellipsoid.h"

CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)

{
    this->xcenter=xcenter;
    this->ycenter=ycenter;
    this->zcenter=zcenter;
    this->rx=rx;
    this->ry=ry;
    this->rz=rz;
}


inline float pow2(int x)
{
    return x*x;
}

void CutEllipsoid::draw(Sculptor &t)
{

        for(int i=xcenter-rx; i<xcenter+rx;i++)
            for(int j=ycenter-ry;j<ycenter+ry;j++)
                for(int k=zcenter-rz;k<zcenter+rz;k++)
                    if((pow2(xcenter-i)/pow2(rx)+pow2(ycenter-j)/pow2(ry)+pow2(zcenter-k)/pow2(rz)) < 1)
                        t.cutVoxel(i,j,k);

}
