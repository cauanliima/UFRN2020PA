#include "cutvoxel.h"

CutVoxel::CutVoxel(int x, int y, int z)
{
  this->x=x;
  this->x=y;
  this->x=z;
}

void CutVoxel::draw(Sculptor &t)
{
 t.cutVoxel(x,y,z);
}
