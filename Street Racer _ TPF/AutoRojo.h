#ifndef AUTOROJO_H
#define AUTOROJO_H
#include "Objetos.h"
class AutoRojo : public Objetos
{
public:
	AutoRojo(int x0,int y0,int vel);
	AutoRojo(){};
	void dibujar();	
	bool desaparecer();
	void borrar();
	bool update();		
	void setLimit(int, int,int, int);		
};
#endif
