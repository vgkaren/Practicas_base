#include <iostream>
//Se utilizara una nueva libreria esa libreria se llama fstream
#include "fstream"
using namespace std;
class Usuario{
public:
	string nombre;
    string apellido;
	string NUsuario;
	string telefono;
	string email;
	string direccion;
	string descripcion;
	string ciudad;
	string genero;
	int edad;
	
void mostrarPerfil(){
	cout<<"Nombre"<<nombre<<endl;
	cout<<"Apellido"<<apellido<<endl;
	cout<<"Nombre de usuario"<<NUsuario<<endl;
	cout<<"Edad"<<edad<<endl;
	cout<<"Telefono"<<telefono<<endl;
	cout<<"Email"<<email<<endl;
	cout<<"Direccion"<<direccion<<endl;
	cout<<"Descripcion"<<descripcion<<endl;
	cout<<"Ciudad"<<ciudad<<endl;
	cout<<"Genero"<<genero<<endl;
}
	
};
int main(){
//crear objeto
Usuario usuario;
	cout<<"Ingresa nombre";
	getline(cin, usuario.nombre);
	
	cout<<"Ingresa tu apellido";
	getline(cin, usuario.apellido);
	
	cout<<"Ingresa tu nombre de usuario";
	getline(cin, usuario.NUsuario);
	
	cout<<"Ingresa tu numero telefonico";
	getline(cin, usuario.telefono);
	
	cout<<"Ingresa tu direccion de correo";
	getline( cin, usuario.email);
	
	cout<<"Ingresa tu domicilio";
	getline(cin, usuario.direccion);
	
	cout<<"Como te decribirias";
	getline(cin, usuario.descripcion);
	
	cout<<"Ciudad en donde habitas";
	getline(cin, usuario.ciudad);
	
	cout<<"Sexo con el que te identificas";
	getline(cin, usuario.genero);

	cout<<"¿Cual es tu edad?";
	cin>>usuario.edad;
		
	cout<<"\nPerfil de Usuario:\n";
	usuario.mostrarPerfil();
	
	ofstream archivo ("perfil_usuario.txt");
	
	if(archivo.is_open()){
	archivo<<"Nombre  : "<<usuario.nombre<<endl;
	archivo<<"Apellido  : "<<usuario.apellido<<endl;
	archivo<<"Edad: "<<usuario.edad<<endl;
	archivo<<"Telefono: "<<usuario.telefono<<endl;
	archivo<<"Email: "<<usuario.email<<endl;
	archivo<<"Direccion: "<<usuario.direccion<<endl;
	archivo<<"Descripcion: "<<usuario.descripcion<<endl;
	archivo<<"Ciudad: "<<usuario.ciudad<<endl;
	archivo<<"Genero: "<<usuario.genero<<endl;
	
	 archivo.close();
	 cout<<"\nPerfil de usuario guardado en 'perfil_usuario.txt'.\n";
	 
	}else{
		cout<<"Error al abrir el archivo.\n";
		
	}
	return 0;	                   
	
}
