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

int Juego::checkCollision(){
	
	int x1 = player->getX();
	int y1 = player->getY();
	
	int x2 = auto_amarillo->getX();
	int y2 = auto_amarillo->getY();
	
	int x3 = auto_rojo->getX();
	int y3 = auto_rojo->getY();
	
	int ancho = 3;
	int alto = 4;
	
	
	if(x1 > (x2 - ancho) && x1 < (x2 + ancho) && 
	   y1 > (y2 - alto) && y1 < (y2 + alto))
	{return 2;}
	   
	   if(x1 > (x3 - ancho) && x1 < (x3 + ancho) && 
		  y1 > (y3 - alto) && y1 < (y3 + alto))
	   {return 3;}
		  
		  
		  return 0;
}

void Juego::aumentar_puntos(){
	
	int y1 = player->getY();
	int y2 = auto_amarillo->getY();
	int y3 = auto_rojo->getY();
	
	if (y2>30)
	{
		puntos++;
	}
}

void Juego::mostrar_puntos(){
	textcolor(8);	
	gotoxy(0,0);
	cout<<"Puntos: "<<puntos<<endl;
}

//void Juego::aumentar_velocidad(){
//	if(puntos>20 && puntos <40)
//	{
//		velocidad++;	
//	}
//	if(puntos>40 && puntos <60)
//	{
//		velocidad++;	
//	}
//	if(puntos>60 && puntos <80)
//	{
//		velocidad++;	
//	}
//	
//}



void Juego::play(){
	
	/**
	aca de debe ir una condicion de corte que finalice el juego
	en un juego con interacciones se suele hacer un while true y corta
	alguna accion en el juego: vida = 0; alguna tecla, etc.
	En este ejemplo el metodo update dira cuando cortar cuando
	el contador llegue a 0 lanzara un false
	**/
	
	
	
	mostrar_puntos();
	bool flag = true;
	while(flag) {
		
		player->update();
		auto_amarillo->update();
		auto_rojo->update();
		auto_amarillo->desaparecer();
		auto_rojo->desaparecer();
		aumentar_puntos();
		
		
		if (checkCollision() == 2){ // si choco con el auto amarillo se cierra el juego
			flag = false;
		}
		
		if (checkCollision() == 3){ // si choco con el auto rojo se cierra el juego
			flag = false;
		}	
		
		
		
		
	}
	gotoxy (0,0);
	cout<<"game over";
	
	
}
