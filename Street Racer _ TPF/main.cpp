#include<iostream>
#include "AutoAmarillo.h"
#include "Objetos.h"

using namespace std;

int main (int argc, char *argv[]) {	
	
	AutoAmarillo *auto_amarillo = new AutoAmarillo(10,0,0);
	auto_amarillo->dibujar();
	auto_amarillo->update();
	return 0;
}

