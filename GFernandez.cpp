#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

class Tateti
{
	public:
		Tateti();
		void jugar();
		
	private:
		int tablero[3][3];
		int turno;
		void crear_tablero();
		int verificar_ganador();
		void colocar_ficha();
		bool verificar_ficha();
		bool verificar_resultado();
};

Tateti::Tateti()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		tablero[i][j] = 0; //completo el tablero con ceros
	}
	srand(time(0)); 
	turno = rand() %2 + 1; // realizo un random para que no inicie siempre el mismo
}

void Tateti::jugar() //constructor de la accion de jugar
{
	while(1) 
	{
		system("cls");
		crear_tablero();
		colocar_ficha();
		if (verificar_resultado())
		break;
	}
	cout<<endl;
}

void Tateti::crear_tablero() //creo el tablero _ dibujo la estructura que contiene las fichas
{
	cout<<"Juego del Tateti"<<endl<<endl;
	cout<<"Jugador 1(1) - Jugador 2(2)"<<endl<<endl;
	cout<<"Turno: Jugador "<<turno<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<" ";
		for(int j=0;j<3;j++)
		{
			cout<<tablero[i][j];
			if (j==2)
			continue;
			cout<<" | ";
		}
		if (i==2)
		continue;
		cout<<endl<<"___|___|___"<<endl<<"   |   |   "<<endl;
	}
}

void Tateti::colocar_ficha() //contructor para colocar las fichas le pido una cordenada que guardo en fila y columnas y remplazo el cero por el turno 1-jugador 1 2-jugador 2
{
	int fila,columna;
	bool pos_ficha=false;
	cout<<endl<<endl<<"Coloca la ficha"<<endl;
	while (!pos_ficha)
	{
		cout<<"Ingrese la fila (0-2): ";
		cin>>fila;
		cout<<"Ingrese la columna (0-2): ";
		cin>>columna;
		if((fila<3 && fila>-1) || (columna>-1 && columna<3))
		{
			for (int i=0;i<3;i++)
			{
				for (int j=0;j<3;j++)
				{
					if (tablero[fila][columna] == 0)
					{
					tablero[fila][columna] = turno;
					pos_ficha = true;
					turno++;	
					}
					
					if (turno>2)
					{
					turno = 1;	
					}
					
				}
			}
		}
		if(!pos_ficha)
		cout<<"Ubicaste mal la ficha, por favor intente en otra posicion"<<endl;
	}
}

bool Tateti::verificar_resultado() //verifica el resultado del juego y lo muestra en pantalla
{
	int check = verificar_ganador(); 
	switch (check)
	{
		case 1: 
			system("cls");
			crear_tablero();
			cout<<endl<<endl<<"El ganador es el jugador numero 1";
			return true;
		case 2: 
			system("cls");
			crear_tablero();
			cout<<endl<<endl<<"El ganador es el jugador numero 2";
			return true;
		case -1:
			if(verificar_ficha())
			{
			system("cls");
			crear_tablero();
			cout<<endl<<endl<<"Empatamos ";
			return true;
			}
		break;
	}
	return false;
}

int Tateti::verificar_ganador() //verifica si uno de los jugadores hace tateti
{
	for (int jug=1;jug<3;jug++)
	{
		for (int i=0;i<3;i++)
		{
		if(tablero[i][0] == jug && tablero[i][1] == jug && tablero[i][2] == jug)
		return jug;
		
		if(tablero[0][i] == jug && tablero[1][i] == jug && tablero[2][i] == jug)
		return jug;
		}
	if(tablero[0][0] == jug && tablero[1][1] == jug && tablero[2][2] == jug)
	return jug;
	
	if(tablero[0][2] == jug && tablero[1][1] == jug && tablero[2][0] == jug)
	return jug;
	}
	return -1;	
}

bool Tateti::verificar_ficha() //verifica si hay una ficha colocada
{
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			if(tablero[i][j]==0)
			return false;
		}
	}
	return true;
}


int main() 
{
	Tateti Juego;
	Juego.jugar();

	return 0;
}
