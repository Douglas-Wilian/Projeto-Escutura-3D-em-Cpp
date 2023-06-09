#include <iostream>
#include "Sculptor.h"
#include <fstream>

using namespace std;

int main() {
Sculptor draw(31,31,28);



// Base do trofeu
draw.setColor(0.28, 0.30, 0.31, 1);
draw.putBox(11, 20, 11, 20, 0, 1);
draw.cutBox(21, 31, 21, 31, 2, 28);
draw.cutBox(11, 12, 11, 12, 0, 1);
draw.cutBox(19, 20, 11, 12, 0, 1);
draw.cutBox(11, 12, 19, 20, 0, 1);
draw.cutBox(19, 20, 19, 20, 0, 1);

draw.setColor(0, 0, 0, 1);
draw.putBox(12, 19, 12, 19, 1, 2);

draw.setColor(0.28, 0.30, 0.31, 1);
draw.putBox(11, 20, 11, 20 , 2, 5);
draw.cutBox(11, 12, 11, 12, 2, 5);
draw.cutBox(19, 20, 11, 12, 2, 5);
draw.cutBox(11, 12, 19, 20, 2, 5);
draw.cutBox(19, 20, 19, 20, 2, 5);
draw.putBox(12, 19, 12, 19, 5, 6);


// Inicio do trofeu
draw.setColor(0.85, 0.64, 0.12, 1);
draw.putBox(12, 19, 12, 19, 6, 7);
draw.putBox(13, 18, 13, 18, 7, 8);
draw.putBox(14, 17, 14, 17, 8, 15);
draw.putBox(13, 18, 13, 18, 11, 12);

//Copo
draw.putEllipsoid(15, 15, 28, 7, 7, 14);
draw.cutEllipsoid(15, 15, 28, 6, 6, 13);

// Efeitos (detalhes)
draw.setColor(0.67, 0.84, 0.90, 1);
draw.putVoxel(25, 25, 22);
draw.putVoxel(7, 7, 25);
draw.putVoxel(5, 5, 20);
draw.putVoxel(8, 10, 18);
draw.putVoxel(10, 9, 20);
draw.putVoxel(23, 23, 20);
draw.putVoxel(26, 20, 25);
draw.putVoxel(22, 20, 22);
draw.putVoxel(25, 25, 20);
draw.putVoxel(7, 23, 20);
draw.putVoxel(20, 8, 25);
draw.putVoxel(9, 20, 22);
draw.putVoxel(25, 8, 20);

draw.writeOFF("Draw_taca.off");

// Outras aplicacoes

Sculptor esfera(21,21,1);

// formato
esfera.setColor(0.85, 0.64, 0.12, 1);
esfera.putSphere(9, 9, 1, 10);
esfera.setColor(0.72, 0.52, 0.04, 1);
esfera.putSphere(9, 9, 1, 9);
esfera.putBox(4,16, 4, 16, 0, 1);


// escritas
esfera.setColor(0, 0, 0, 1);
esfera.putBox(5, 7, 3, 16, 0, 1);
esfera.putBox(10, 12, 3, 16, 0, 1);

esfera.putBox(3, 13, 13, 15, 0, 1);
esfera.putBox(3, 13, 4, 6, 0, 1);

esfera.putBox(13, 15, 6, 9, 0, 1);
esfera.putBox(13, 15, 11, 14, 0, 1);

esfera.putBox(8, 13, 9, 11, 0, 1);

esfera.setColor(0.72, 0.52, 0.04, 1);
esfera.putBox(10, 12, 11, 13, 0, 1);
esfera.putBox(10, 12, 6, 9, 0, 1);


esfera.setColor(0,0,0,1);
esfera.putVoxel(13,5,0);
esfera.putVoxel(13,14,0);



esfera.writeOFF("Moeda.off");


return 0;
} 