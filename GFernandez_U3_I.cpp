
#include<iostream>
using namespace std;

int main (int argc, char *argv[]){
int anio,mes,dia,edad,anioActual,mesActual,diaActual;

cout<<"Ingreso el anio en curso: ";
cin>>anioActual;

cout<<"Ingrese mes en curso: ";
cin>>mesActual;

cout<<"Ingrese el dia: ";
cin>>diaActual;

cout<<"Ingrese el anio de su nacimiento: ";
cin>>anio;

cout<<"Ingrese el mes de su nacimiento: ";
cin>>mes;

cout<<"Ingrese el dia de su nacimiento: ";
cin>>dia;

if(mesActual>=mes && diaActual>=dia)
	{ 
	edad = anioActual - anio;
	}else
 	edad = anioActual - anio - 1;

if (anio<2020 && mes>=1 && mes<=12)
	{
	switch(mes)
	{
	case 1: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de enero de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 2: if (dia<=28 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de febrero de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 3: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de marzo de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 4: if (dia<=30 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de abril de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 5: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de mayo de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 6: if (dia<=30 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de junio de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 7: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de julio de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 8: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de agosto de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 9: if (dia<=30 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de septiembre de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 10: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de octubre de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 11: if (dia<=30 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de noviembre de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	case 12: if (dia<=31 && dia>=1)
			{
			cout<<"Usted nacio el dia: "<<dia<<" de diciembre de "<<anio<<" y tiene "<<edad<<" anios";
			}else
			cout<<"Ingrese correctamente el dia de su nacimiento";
	break;
	}
	}else
	cout<<"Ingrese correctamente el mes";

	
	
	return 0;
}
