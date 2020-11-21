#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  float r,g,b; // Colors
  float a; // Transparency
  bool isOn; // Included or not
};

/**
 * @brief The Sculptor class
 * Esta é a classe Scultor
 * Ela serve para criar esculturas virtuais em 3 dimensões
 * @details
 * A menor parte da estrutura é representada por um Voxel
 *
 */
class Sculptor {
protected:
  Voxel ***v;

  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
   * @brief Sculptor Este construtor da classe cria um paralelepipedo onde sera desenvolvido o projeto.
   * @details
   * @param _nx
   * @param _ny
   * @param _nz
   */
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  /**
   * @brief setColor Define a cor que será ultilizada pelas demais funcoes de preenchimento
   * @details
   * @param r_
   * @param g_
   * @param b_
   * @param alpha
   */
  void setColor(float r_, float g_, float b_, float alpha);
  /**
   * @brief putVoxel Habilita e preenche o Voxel com as cordenadas (x,y,z) com a cor definida pela função setColor
   * @details
   * @param x
   * @param y
   * @param z
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief cutVoxel Desabilita o Voxel com as cordenadas (x,y,z).
   * @details
   * @param x
   * @param y
   * @param z
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief putBox Preenche um paralelepipelo definido de X0 a X1, Y0 a Y1 e Z0 a Z1.
   * @details
   * @param x0
   * @param x1
   * @param y0
   * @param y1
   * @param z0
   * @param z1
   */

  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief cutBox Desabilita um paralelepipelo definido de X0 a X1, Y0 a Y1 e Z0 a Z1.
   * @details
   * @param x0
   * @param x1
   * @param y0
   * @param y1
   * @param z0
   * @param z1
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief putSphere Preenche um esfera com centro (xcenter,ycenter,zcenter) e raio radius.
   * @details
   * @param xcenter
   * @param ycenter
   * @param zcenter
   * @param radius
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief cutSphere Desabilita um esfera com centro (xcenter,ycenter,zcenter) e raio radius.
   * @details
   * @param xcenter
   * @param ycenter
   * @param zcenter
   * @param radius
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief putEllipsoid Habilita uma elipse com centro (xcenter,ycenter,zcenter).
   * @details
   * @param xcenter
   * @param ycenter
   * @param zcenter
   * @param rx
   * @param ry
   * @param rz
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief cutEllipsoid Desabilita uma elipse com centro (xcenter,ycenter,zcenter).
   * @details
   * @param xcenter
   * @param ycenter
   * @param zcenter
   * @param rx
   * @param ry
   * @param rz
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief writeOFF Escreve o arquivo em formato de texto com extensão (.off) para ser interpretado por software gráfico.
   * @details
   * @param filename
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
