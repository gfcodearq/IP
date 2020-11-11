#include "Juego.h"
#include <cstdlib>
#include <conio2.h>

#include <iostream>
#include <cstdio>



using namespace std;

Juego::Juego(){
	
	Player *player = new Player(15,45,45);
	player->setLimit(0,130,0,45);
	AutoAmarillo *auto_amarillo = new AutoAmarillo(15,3,2);
	auto_amarillo->setLimit(0,130,0,45);
	AutoRojo *auto_rojo = new AutoRojo(15,20,5);
	auto_rojo->setLimit(0,130,0,45);
	puntos = 0;
	/*_level=Level(0,0);*/
	
}
