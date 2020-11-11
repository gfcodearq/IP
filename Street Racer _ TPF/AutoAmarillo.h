#ifndef AUTOAMARILLO_H
#define AUTOAMARILLO_H
#include "Objetos.h"
class AutoAmarillo : public Objetos
{
public: 
	AutoAmarillo(int x0,int y0,int vel);
	AutoAmarillo(){};
	bool update();	
	void borrar();
	void aparecer();
	bool desaparecer();	
	void dibujar();		
	void setLimit(int, int,int, int);	
};

#endif
