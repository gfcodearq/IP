#include <iostream>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
 
using namespace std;
 
int random();
void tirar_dados(int v[5]);
int puntuacion(const int v[5]);
int valor_maximo(const int v[5]);
int contador(const int v[5], int valor);
bool Full(const int v[5]);
bool Poker(const int v[5]);
bool Escalera(const int v[5]);
bool Generala(const int v[5]);

//funcion principal
int main()
{
    int jugador, pc;
    int dadosJugador[5];
    int dadosPc[5];
 
    srand(time(NULL));
 
	//comienza el juego 
    cout<<"Juego de la generala"<<endl;
	cout<<"\nTira los dados apretando enter"<<endl;
	cout<<"Presione escape si quiere salir del juego"<<endl;
	
		while(true) 
		{
		if(kbhit()) 
		{ 
			int tecla=getch();
			
			switch(tecla)
				{
			case 13: //tira los dados
    tirar_dados(dadosJugador);
    jugador = puntuacion(dadosJugador);
    cout << "Puntuacion maxima: " << jugador << endl; //muestra en pantalla el puntaje maximo del jugador
 
    cout << "\nLa PC tira los dados: ";
    tirar_dados(dadosPc);
    pc = puntuacion(dadosPc);
    cout << "Puntuacion maxima: " << pc << endl; //muestra en pantalla el puntaje maximo de la pc
 
    cout << "\nGanador: ";
    if (pc < jugador) // si el puntaje de la pc es menor que la del jugador
        cout << "Jugador";
    else if (pc > jugador) // si el puntaje de la pc es mayor que la del jugador
        cout << "Pc";
    else // sino pasa todo lo anterior entonces es empate
        cout << "Empate";
 		cout << endl;
 		continue;	
			case 27: //
 			cout<<"El juego a terminado "<<endl;
 			return 1;
		}
		
	}
}

    return 0;
}
 
 
 //funcion tirar dados a llama a la funcion ramdon para que sean numeros al azar entre 1 y 6
void tirar_dados(int v[5]) 
{
	for (int i=0;i<5;i++)
		v[i] = rand()%6 + 1;	
	
	
	
	for (int i=0;i<5;i++)
		cout<<v[i]<<" ";
}
 
int puntuacion(const int v[5]) //puntajes para cada situacion 
{
    int puntos[6];
 
    puntos[0] = contador(v, 1); //llama a la funcion contador para determinar cuantos dados da cada cara hay
    puntos[1] = contador(v, 2);
    puntos[2] = contador(v, 3);
    puntos[3] = contador(v, 4);
    puntos[4] = contador(v, 5);
    puntos[5] = contador(v, 6);
 
    cout << endl;
    cout << "Todo al 1: " << puntos[0] << endl; //imprime la cantidad de cada cara de los dados
    cout << "Todo al 2: " << puntos[1] << endl;
    cout << "Todo al 3: " << puntos[2] << endl;
    cout << "Todo al 4: " << puntos[3] << endl;
    cout << "Todo al 5: " << puntos[4] << endl;
    cout << "Todo al 6: " << puntos[5] << endl;
 
    if (Generala(v)) // si es generala imprime el puntaje de la misma
    {
        cout << "Generala: 60" << endl;
        return 60;
    }
    else if (Escalera(v)) //si es escalera imprime el puntaje de la misma
    {
        cout << "Escalera: 50" << endl;
        return 50;
    }
    else if (Poker(v)) // si es poker imprime el puntaje de la misma
    {
        cout << "Poker: 40" << endl;
        return 40;
    }
    else if (Full(v)) // si es full imprime el puntaje de la misma
    {
        cout << "Full: 30" << endl;
        return 30;
    }
    else //imprime el valor maximo
        return valor_maximo(puntos);
 
}
 
int valor_maximo(const int v[6]) // funcion para obtener el valor maximo
{
    int max;
 
    for (int i = 0; i < 6; i++)
    {
        if (i == 0 || v[i] > max)
            max = v[i];
    }
    return max;
}
 
int contador(const int v[5], int valor) //cuenta cuantos salen de cada valor y los suma
{
    int suma = 0;
 
    for (int i = 0; i < 5; i++)
    {
        if (v[i] == valor)
            suma += v[i];
    }
    return suma;
}
 

 
bool Full(const int v[5]) //verifico si es full
{
    int n1, n2 = 0, count1 = 1, count2 = 0;
 
    n1 = v[0];
    for (int i = 1; i < 5; i++)
    {
        if (n1 == v[i])
            count1++;
        else if (n2 == 0)
        {
            n2 = v[i];
            count2++;
        }
        else if (n2 == v[i])
            count2++;
    }
 
    return ((count1 == 3 && count2 == 2) || (count2 == 3 && count1 == 2));
}
 
bool Poker(const int v[5]) //verifico si es poker 
{
    int n1, n2 = 0, count1 = 1, count2 = 0;
 
    n1 = v[0];
    for (int i = 1; i < 5; i++)
    {
        if (n1 == v[i])
            count1++;
        else if (n2 == 0)
        {
            n2 = v[i];
            count2++;
        }
        else if (n2 == v[i])
            count2++;
    }
 
    return (count1 == 4 || count2 == 4);
}
 
bool Escalera(const int v[5]) //verifico si es escalera 
{
    if (v[0] == 1 || v[0] == 2)
    {
        for (int i = 1; i < 5; i++)
        {
            if (v[i] != v[i - 1] + 1)
                return false;
        }
    }
    else
        return false;
 
    return true;
}

bool Generala(const int v[5]) //verifico si es generala
{
    for (int i = 1; i < 5; i++)
    {
        if (v[i] != v[i - 1])
            return false;
    }
 
    return true;
}
