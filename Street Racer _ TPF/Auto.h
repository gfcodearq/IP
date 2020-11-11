#ifndef AUTO_H
#define AUTO_H
#include <ctime>
#include "DibujarObjeto.h"
using namespace std;

class Auto : public DibujarObjeto
{
protected: 
	int pasoX;
	int pasoY;
	int xnueva;
	int ynueva;
	int maxLimitX;
	int maxLimitY;
	int minLimitX;
	int minLimitY;	
public:
	Auto(int x0,int y0,int vel);
	Auto (){};
	void setLimit(int, int,int, int);
	bool update();
	int getX(){return x;};
	int getY(){return y;};	
};
#endif
