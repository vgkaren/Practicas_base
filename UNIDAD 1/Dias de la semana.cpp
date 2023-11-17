#include <iostream>
using namespace std;
int main(){
	int k;
cout<<"Digita el numero del 1 al 7";
cin>>k;
switch(k){
case 1:
cout<<"Hoy es lunes";break;
case 2:
cout<<"Hoy es martes";break;
case 3:
cout<<"Hoy es miercoles";break;
case 4:
cout<<"Hoy es jueves";break;
case 5:
cout<<"Hoy es viernes";break;
case 6:
cout<<"Hoy es sabado";break;
case 7:
cout<<"Hoy es domingo";break;
default: cout<<"NO ES UN DIA DE LA SEMANA INTENTALO DE NUEVO";break;
}


return 0;
}