#include "iostream"
#include "string"
using namespace std;
int main(){
	// en const  falto el int 
	const int numAlumnos = 5;
	int asistencia [numAlumnos];
	for (int i=0; i<numAlumnos; i++){
		asistencia [i]=0;
	}
	cout<<"Bienvenido  al sistema de asistencias:"<<endl;
	cout<<"Registra la asistencia de los alumnos:"<<endl;
	cout<<"Registra el nombre de los alumnos e indica si asistio"<<endl;
	
	for(int i=0; i< numAlumnos; i++){
		string nombre;
		char asistio;
		cout<<"Alumno: "<<i +1<<" : ";
		cin>>nombre;
		cout<<"�Si asistio? (S/N)";
		cin>>asistio;
		
		if(asistio == 's' or asistio == 'S'){
			asistencia[i] = 1;
		}
	}
	int faltas =0;
	for(int i=0; i<numAlumnos; i++){
		if(asistencia[i] == 0){
			faltas++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	return 0;
}
