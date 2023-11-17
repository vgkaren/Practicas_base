#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
	string user,pass, usuario = "sistemas", password = "Admin01";
	char seguir,opc;
	int multiplicacion,numero,i;
	cout<<"Bienvenido(a) por favor ingresa el sistema:\n";
	cout<<"Ingresa tu usuario:  ";
	cin>>user;
	cout<<"Ingresa tu password: ";
	cin>>pass;
	if(usser == usuario && pass == password){
		do{
			cout<<"Por favor ingresa el numero de la tabla a imprimir: ";
			cin>>numero;
			for(int i = 1; i<=10; i++){
				multiplicacion = i*numero;
				cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
			}
			cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
			fflush(stdin)
			cin>>seguir;
		}
		
		while(seguir!=´n´);
		 int h = 0, m = 0, s = 0;	

	 while(1){
		
		if(s>=60){
			s=8;
			m++;
			 
			 if(m>=60){
			 	m=0;
			 	h++; 
			}
	   }
	  system("cls");
   }

	else{
		cout<<"Usuario no valido por favor contacta a soporte: ";
	}	
	cin.get();
	
	return 0
}
