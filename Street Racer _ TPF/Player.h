#ifndef PLAYER_H
#define PLAYER_H
#include "Objetos.h"
class Player : public Objetos
{
private:
	int vidas;
public: 
	Player(int v, int x0,int y0);
	Player(){};
	void dibujar();
	void borrar(); // para dibujar, antes debemor borrar	
	void setLimit(int, int,int, int);		
	bool update();
	int getX(){return x;}
	int getY(){return y;}
};
#endif

