//TRAGAPERRAS

#include <iostream>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;
int main (int argc, char *argv[]) {
int monedas,n1,n2,n3,sumatoria,total;
char respuesta;    

cout<<"Juego de las tragaperras "<<endl;
cout<<"El juego funciona con monedas cuando quieras terminar el juego presiona esc"<<endl;
cout<<"\nCuantas monedas desea ingresar "<<endl;
cin>>monedas;

for(int i=1;i<=monedas;i++)
	{
		cout<<"Tira la palanca presionando enter"<<endl;
		while(true) 
		{
			if(kbhit()) 
			{ 
			int tecla=getch();
			
			switch(tecla)
				{
				
			case 13: //tira la palanca
				
				srand(time(NULL));
		        n1 = rand()%7 + 1;
		        n2 = rand()%7 + 1;
		        n3 = rand()%7 + 1;
				monedas = monedas-1;
				
				if(n1==n2 && n2==n3) //Si gano
		        {
		        	cout<<"\nGANASTE "<<endl;
		        	cout<<"\nSus numeros son: "<<n1<<" "<<n2<<" "<<n3<<endl;
		        	sumatoria = n1+n2+n3;
		        	cout<<"Ganaste "<<sumatoria<<" monedas"<<endl;
		        	total=monedas+sumatoria;
		        	cout<<"Si quieres puedes retirarte aprentado escape sino presiona enter para seguir jugando"<<endl;
		        	cout<<"En total tienes: "<<total<<" monedas";
		        	monedas=total;
		        }else //Muestra los numeros
				{
					cout<<"\nSus numeros son: "<<n1<<" "<<n2<<" "<<n3<<endl;
		        	cout<<"Te quedan: "<<monedas<<" monedas"<<endl;		      		
				}
				
				while(monedas==0) //Si me quedo sin monedas
				{
					cout<<"\nTe quedaste sin monedas"<<endl;
					cout<<"Queres seguir jugando |s| o |n|"<<endl;
					cin>>respuesta;
					if(respuesta == 's' || respuesta =='S')
					{
					cout<<"\nIngrese monedas y presione enter"<<endl;
					cin>>monedas;
					continue;
					}
				
					if(respuesta == 'n' || respuesta =='N')
					{
					cout<<"Gracias por jugar "<<endl;								
					}
					return 1;
				}
				break;
				
				
				case 27: //sale del juego
					cout<<"\nSaliste del juego"<<endl;
					cout<<"Tienes "<<monedas<<" monedas"<<endl;
					return 1;
					break;
				
				
				}
			}
		}
		
	}
	
	return 0;
}

