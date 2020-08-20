#include <iostream>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>



using namespace std;
int main (int argc, char *argv[]) {
	int Maso[4][10] = {{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12}}; // Las 40 cartas del maso 
	float Valor[4][10] = {{1,2,3,4,5,6,7,0.5,0.5,0.5},{1,2,3,4,5,6,7,0.5,0.5,0.5},{1,2,3,4,5,6,7,0.5,0.5,0.5},{1,2,3,4,5,6,7,0.5,0.5,0.5}}; // Los valores de las cartas
	string Palo[4]= {"Basto","Oro","Espada","Copa"}; //Los palos de la cartas 
	int i,j; //indices de los arreglos en maso y valor
	float suma=0,suma_1=0,diferencia=0;
	char respuesta; 
	
	
	//Comienza el juego
	
	cout<<"Juego del siete y medio "<<endl;
	cout<<endl;
		
		for (int k=0;k<=40;k++) // se repite hasta que se terminen las cartas 
			{
			srand(time(NULL));
			i=rand()%3 + 0; //random para los indices
			j=rand()%9 + 0;
			cout<<"La carta es el: "<<Maso[i][j]<<" de "<<Palo[i]<<" su valor es: "<<Valor[i][j]<<endl;
			suma += Valor[i][j];
				if(suma<7.5)
				{
				cout<<"Tienes en total "<<suma<<" puntos"<<endl;
				cout<<"\nQuieres otra carta "<<endl;
				cin>>respuesta;
				if(respuesta == 's' || respuesta == 'S')
				{
				
				}
				}
				if(suma>7.5) //si el jugador se pasa con las cartas
				{
					cout<<"Te pasaste :("<<endl;
					cout<<"Gana la PC"<<endl;
					break;
				}
				if(respuesta == 'n' || respuesta == 'N') //si la respuesta es no juega la PC
				{
					cout<<"Ahora me toca a mi "<<endl;
					while(suma_1<7.5 && suma_1<suma) //mientras sea menor a 7.5 y sea menor a los puntos del jugador 1 
						{
						i=rand()%3 + 0; //random para los indices
						j=rand()%9 + 0;
						cout<<"\nLa carta es el: "<<Maso[i][j]<<" de "<<Palo[i]<<" su valor es: "<<Valor[i][j]<<endl;
						suma_1 += Valor[i][j];			
						cout<<"La PC tiene en total "<<suma_1<<" puntos"<<endl;
						diferencia = 7.5 - suma_1;	
						if(diferencia <=2 && diferencia >=0 && suma_1>suma) //si tiene una diferencia de 2 entre el 7.5 y los puntos actuales && si no pasa al jugador 1 sigue jugando
						{
						cout<<"\nMe planto "<<endl;
						cout<<"La PC tiene en total "<<suma_1<<" puntos"<<endl;
						if(suma_1<suma)
						{
						cout<<"\nGanaste que suerte "<<endl;
						}else
						{
						cout<<"Te gane suerte la proxima"<<endl;
						}
						return 1;
						}		
						}
						if(suma == suma_1) // si empatamos
						{
							cout<<"Vos podes creer que empatamos "<<endl;
							return 1;
						}
						
						if(suma_1>7.5) // si la PC se pasa con las cartas
						{
							cout<<"Me pase :("<<endl;
							cout<<"Ganaste que suerte "<<endl;
							return 1;
						}
				}
			}
			
	getch();	
	return 0;
	}
