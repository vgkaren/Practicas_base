//Definir variables
#define tope 2023
#define meses 12
#define dias 24
#define horas 60
#define minutos 60
#define segundos 60
//Incluir las librerias
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string> 
#include<stdio.h>
using namespace std;
	const int alumnos = 6;
const int MAX_USERS = 10; 
const string USERS[] = {"ESMERALDA", "KAREN", "ABRAHAM"}; 
const string PASSWORDS[] = {"2552", "JACK", "MORRILLA"};
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
//Declarar variables
    string username, password;
	int main(){
 cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su password: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenidoa este nuevo mundo " << username << "!" << endl;
        int j;
        j = 1;
        do
		{
	//Imprimir el menu
        cout<<"Ingresa el numero del indice que deseas explorar"<<endl;
            cout<<"1 Hola_mundo"<<endl;
			cout<<"2 promedio"<<endl;
			cout<<"3 Portada"<<endl;
			cout<<"4 Vocales"<<endl;
			cout<<"5 lados de un triangulo"<<endl;
			cout<<"6 1 al 100"<<endl;
			cout<<"7 100 al 0"<<endl;
			cout<<"8 PARES"<<endl;
			cout<<"9 Impares"<<endl;
			cout<<"10 Cronometro"<<endl;
			cout<<"11 Tablas multiplicar"<<endl;
			cout<<"12 Dia de las semana"<<endl;
			cout<<"13 arreglo nombres"<<endl;
			cout<<"14 arreglo "<<endl;
			cout<<"pase de asistencia"<<endl;
			cin>>j;
        switch(j){
			//Ingresaremos la variable la cual vamos a comparar 
			 	case 1:{
			 		//si j es = 1
			 		cout<<"HOLA MUNDO COMO ESTAMOSSS"<<endl;
					break;
				    }
				   case 2:{
				   	//si j es = 2
				  	int a,b,c,d,e,suma,promedio;
                 	cout<<"Hola bienvenido a sacar tu promedio"<<endl;
	                 cout<<"ingresa el primer promedio"<<endl;
	                 cin>>a;
                   	cout<<"ingresa el segundo promedio"<<endl;
	                 cin>>b;
                  	cout<<"ingresa el tercer promedio"<<endl;
                  	cin>>c;
                 	cout<<"ingresa el cuarto promedio"<<endl;
                 	cin>>d;
	                 cout<<"ingresa el quinto promedio"<<endl;
                 	cin>>e;
                 	promedio = (a+b+c+d+e)/5;
	                 cout<<"tu promedio general es es de:"<<promedio<<endl;
	                 if(promedio >=7){
	                 	cout<<"tu calificacion es aprobatoria"<<endl;
					 }
					 else{
					 	cout<<"lo lamento tu promedio no es aprobado";
					      }
					      cout<<"gracias por preguntarme por tu promedio";
					      return 0;
					      break;
					      case 3:{
					      	//si j es = 3
						  {
							printf(" /n Esmeralda y Karen.\n");
							printf(" Escuela Conalep Nucalpan 1.\n");
							printf(" Modulo Programacion basica.\n");
							printf(" Maestro Jose Luis Chavez Gomez.\n");
							printf(" Carrera tecnico en bachiller en informatica.\n");
							printf(" Grupo 305.\n");
							printf(" Tercer semestre de bachillerato.\n");
							printf(" Edad 16 años.\n");
							printf(" Correo avela2322@conalepmex.edu.mx.\n");
							printf(" Correo avela2322@conalepmex.edu.mx.\n");
							
							return 0;
							
							}
							break;
						  }
						  case 4:{
						  	//si j es = 4
						  	{
						  	char letra1;
						  	cout<<"Ingresa una letra";
						  	cin>>letra1;
						  	if(letra1 =='a'){
						  	cout<<"es vocal";
							  }
							  if(letra1 == 'e'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'i'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'o'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'u'){
							  	 cout<<"es vocal";
							  }
							 else {
							 	cout<<"no es vocal";
							 }
							 
							  }
							break;
						  }
						  case 5:{
						  	//si j es = 5
						  	{
						  	int num1,num2,num3;
						  	cout<<"ingresa el primer numero"<<endl;
						  	cin>>num1;
						  	cout<<"ingresa el segundo numero"<<endl;
						  	cin>>num2;
						  	cout<<"ingresa el tercer numero"<<endl;
						  	cin>>num3;
						  	
						  	if(num1==num2 and num2==num3){
						  	cout<<"El triangulo equilatero";
							  }
							else if(num1==num2 and num2==num3){
							cout<<"El triangulo es isoseles";
							}
							else if(num1 != num2 and num2 != num3){
							cout<<"El triangulo es escaleno";
							}
							else{
								cout<<" no es un triangulo";
							}
							return 0;
							  }
							break;
						  }
						  case 6:{
						  	//si j es = 5
						  	{
						  	int i;
						  	for(i=1;i<100;i++){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 7:{
						  	//si j es = 7
						  	{
						  	int e;
						  	for(e=100;e>0;e--){
						  		cout<<e<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 8:{
						  	//si j es = 8
						  	{
						  	int i;
						  	for(i=0;i<=100;i+=2){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 9:{
						  	//si k es = 9
						   {
						 int i;
						for(i=1;i<=100;i+=2){
						  	cout<<i<<endl;
								  }
								  return 0;
							  }
							break;
						  }
						  case 10:{
						  	//si j es = 10
						  	{
						  	int h = 0, m = 0, s = 0;
							while(1){
							if(s<=60){
							s = 0;
							m++;
							if(m>=60){
							m = 0;
							h++;
							 }
							 }
						     system("cls");
							cout<<h<<":"<<m<<":"<<s;
							Sleep(1000);
							 s++;
							  }
							 cin.get();
							  }
							break;
						  }
						   case 11:{
						   	//si j es = 11
				         	{
						    int i;
						    int num;
						  	int multiplicacion;
						     cout<<"Inserta el numero de la tabla de multiplicar que quieres realizar"<<endl;
						  	 cin>> num;
						  	 for(i=1;i<=50;i++){
						  	multiplicacion= num*i;
						  	cout<<num<<"x"<<i<<"="<<multiplicacion<<endl;
							   }
							return 0;
							  }
							break;
						  }
						  case 12:{
						  	//si j es  = 12
						  	{
						  	 int pro;
						  	 cout<<"Digita el numero del 1 al 7";
						  	 cin>> pro;
						  	 switch(pro){
						  	  case 1:
		                     cout<<"Hoy es lunes -_-";break;
		                     case 2:
	                      	cout<<"Hoy es martes";break;
	                     	case 3:
		                     cout<<"Hoy es miercoles";break;
	                      	case 4:
	                     	cout<<"Hoy es jueves";break;
	                     	case 5:
	                     	cout<<"Hoy es viernes :)";break;
		                     case 6:
		                     cout<<"Hoy es sabado";break;
	                      	case 7:
		                     cout<<"Hoy es domingo";break;
		                     default: cout<<"NO ES UN DIA DE LA SEMANA INTENTALO DE NUEVO";break;
							   }
							   return 0;
							  }
							break;
						  }
						  case 13:{
						  	
                        //si j es = 13
                        
	                    int miarreglo[5];
	                    string nombres[3];
	
	                    miarreglo[0] = 10;
                        miarreglo[1] = 20;
	                    miarreglo[2] = 30;
                        miarreglo[3] = 40;
                     	miarreglo[4] = 50;
	
	                    nombres[0]="Abraham";
                     	nombres[1]="Jose";
	                    nombres[2]="Saul";
	
	                    for(int j=0; j<=4; j++){
	                   	cout<<"arreglos:"<<j<<":"<<miarreglo[j]<<endl;
                    	}
                     	for(int k=0; k<=2; k++){
	                	cout<<"No sabes"<<nombres[k]<<endl;
                    	}
                        }
							break;
						  
						  case 14:{
						  	//Si j es = 14
						  	const int miarreglo = 5;
						  	int numeros[miarreglo];
						  	
						  	for(int e=0; e<miarreglo; e++){
						  		cout<<"ingresa el numero"<<e+1<<":";
						  		cin>>numeros[e];
						  		
							  }
							  cout<<"los numeros ingresados son :";
							  for(int a=0; a<miarreglo; a++){
							  	cout<<numeros[a]<<"";
							  	
							  }
							  cout<<endl;
							  return 0;
			                 }
							   break;
							   case 15:{
						    	//si j = 15
						  
						  
	                         int asistencia[alumnos];
	                       
	                         for(int z=0; z<alumnos; z++){
	                         asistencia[z]=0;
	                         }
 	                         cout<<"Bienvenido al pase de lista:"<<endl;
	                         cout<<"registra la asistencia de los alumnos:"<<endl;
	                         cout<<"registra el nombre de los alumnos e indica si asistio"<<endl;
	                         for(int z=0; z<alumnos; z++){
		                     string nombres;
		                     char asistio;
	                         cout<<"alumno:"<<z+1<<"  :  ";
		                     cin>>nombres;
		                     cout<<"¿si asistio? (s/n)";
		                     cin>>asistio;
		
		                     if(asistio == 's' || asistio == 's'){
			                 asistencia[z] = 1;
		 
		                     }
 		 
	                         }
                          	int faltas = 0;
	                         for(int z=0; z<alumnos; z++){
		                     if(asistencia[z] == 0){
			                 faltas++;
		                     }
	                         }
	
	                         int asistio = 0;
	                         for(int z=0; z<alumnos; z++){
		                     if(asistencia[z] == 0){
			                 asistio++;
		                     }
	                         }
                             cout<<"numero de faltas"<<faltas<<endl;
                             cout<<"numero de asistio"<<asistio<<endl;
                             return 0;	
                             }
        
		
	}
}
	
	system("cls");
	
}
while(j>=12);
}
else{
        cout << "Credenciales incorrectas. Inicio de sesión fallido." <<endl;
    }
    return 0;
}

