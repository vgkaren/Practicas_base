/*
utilizar todos los caracteres y funciones de la libreria 
*/
#include<iostream>
using namespace std;
// funcion principal
int main(){
	//declarar variable
	int a,b,c,d,e,promedio;
	cout<<"Bienvenido a este espacio donde te calcularemos tu promedio"<<endl;
	cout<<"Por favor digita el primer promedio"<<endl;
		cin>>a;
    cout<<"Por favor digite el segundo promedio"<<endl;
    cin>>b;
    cout<<"Por vafor digitte el tercer promedio"<<endl;
    cin>>c;
    cout<<"Por favor digite el cuarto promedio"<<endl;
    cin>>d;
    cout<<"Por favor digite el cuatro promedio"<<endl;
    cin>>e;
    promedio = (a+b+c+d+e)/6;
    cout<<"Tu promedio general es de;"<<promedio<<endl;
    if(promedio >=6){
    cout<<"Tu calificacion es aprobatoria"<<endl;
    
	}
    else(
    cout<<"Lo siento no estas aprobado";
     }
    cout<<"Gracias por utilizar este medio";
    return 0;
    
    
}
