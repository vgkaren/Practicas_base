    #define tope=2023;
	#define Meses=12;
	#define Dias = 24;
	#define Horas = 60;
	#define Minutos = 60;
	#define segundos = 60;
	
	#include <iostream>
using namespace std;
	int main(){
	int an,mes,dia,hora,min,seg;
	cout<<"Digita tu año de nacimiento"<<endl;
	cin>>an;
	cout<<"Digita tu mes de nacimiento"<<endl;
	cin>>mes;
	cout<<"Digita tu dia de nacimiento"<<endl;
	cin>>dia;
	 
	 an=resta(int an, tope);
	 mes=multiplicacion(int an, Meses);
	 dia=multiplicacion(int mes, Dias);
	 hora=multiplicacion(int dias, Horas);
	 min=multiplicacion(int horas, Minutos);
	seg=multiplicacion(int minutos, Segundos);
	
	cout<<"Tu edad es";
	cin>>an;
	cout<<"tus meses son";
	cin>>mes;
	cout<<"Tus dias son";
	cin>>dia;
	cout<<"Tus horas son";
	cin>>hora;
	cout<<"Tus minutos son";
	cin>>min;
	cout<<"tus segundos son";
	cin>>seg;
		
	return 0
	}


