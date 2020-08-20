#include<iostream>
using namespace std;

int main (int argc, char *argv[]){
	string personaje;
	int vida=10,runa_1,runa_2,runa_3;
	
	
	cout<<"Ingrese el nombre del personaje: ";
	cin>>personaje;
	
	cout<<"Sus puntos de vida son: "<<vida<<endl;
	
	cout<<"Ingresar primera runa: ";
	cin>>runa_1;
	
	cout<<"Ingresar segunda runa: ";
	cin>>runa_2;
	
	cout<<"Ingresar tercera runa: ";
	cin>>runa_3;
	
	vida = vida - (runa_1 - (runa_2/2) + (runa_3/2));
	cout<<"Sus puntos de vida son: "<<vida<<endl;
	
	vida = vida - (runa_1 - (runa_2/2) + (runa_3/2));
	cout<<"Sus puntos de vida son: "<<vida<<endl;
	
	bool vivo = vida>0; 
	cout<<"Tu personaje sigue vivo?: "<<vivo<<endl;
	
	return 0;
}
