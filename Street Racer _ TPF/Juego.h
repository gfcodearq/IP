#ifndef JUEGO_H
#define JUEGO_H
#include "Objetos.h"
#include "AutoAmarillo.h"
#include "AutoRojo.h"
#include "Player.h"


class Juego{
	
protected: 	
	int teclas[4];	
	int checkCollision();
	int puntos;	
	Player *player;
	AutoAmarillo *auto_amarillo;
	AutoRojo *auto_rojo;	
public:	
	Juego();
	void play();
	void mostrar_puntos();
	void aumentar_puntos();
	void aumentar_velocidad();	
};

#endif


