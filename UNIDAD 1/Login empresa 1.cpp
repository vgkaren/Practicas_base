#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
		string user,pass, usuario = "Heart", password = "Empresa";
	cout<<"Bienvenido(a) porfavor:\n";
	cout<<"Ingresa tu usuario:";
	cin>>user;
	cout<<"Ingresa tu password:";
	cin>>pass;
		if(user==usuario && pass==password){
			cout<<"Bienvenido a Heart.thly";
		}
		else{
			cout<<"Los datos ingresados son incorrectos registrate";
		}
	
	cin.get();
	return 0;	
}
	
