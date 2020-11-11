#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio2.h>
#include "Objetos.h"

using namespace std;

//Constructor

Objetos::Objetos(int vel,int x0,int y0)
{
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad; //cada cuanto se permite mover la pelotita 16 veces por segundo
	tempo=clock(); //inicializamos tempo con el reloj
	
	x = x0;
	y = y0;
	xnueva = x0;
	ynueva = y0;
}

void Objetos::dibujar()
{
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);	
			putchxy(x+i,y+k,matriz[i][k]); 
		}
	}
}

void Objetos::borrar()
{
	for (int i= -1; i<ancho+1; i++){
		for (int k= -1; k<alto+1; k++){
			putchxy(x+i,y+k,' '); 
		}
	}
}

void Objetos::setLimit(int x0, int x1,int y0, int y1){
	maxLimitX = x1;
	maxLimitY = y1;
	minLimitX = x0;
	minLimitY = y0;
	
}	

bool Objetos::desaparecer(){
	if(x>129 || y>44)
	{
		borrar(); //borro cuando llega al limite 	
		x=rand()%130+1;y=0; // lo posiciono arriba 		
		return false;
	}		
	else {return true;}
}





