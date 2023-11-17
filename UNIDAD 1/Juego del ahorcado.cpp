#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
char frase[60],rep[100],temporal[100];
	char pal;
	int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
	int repetido=0,gano=0;
	cout<<" ** Bienvenidos a este su juego de ahorcado ** \n\n";
	cout<<"Ingresa la palabara que tendra que adivinar el jugador: ";
	gets(frase);
	system("cls");
	longitud = 0;
	inicial = 0;
	j=0;
	rep[0] = ' ';
	rep[1] = '\0';
	do{
		system("cls");
		temp = 0;
		if(inicial == 0){
			
			for(i=0;i<strlen(frase);i++);
			if(frase[i]==' '){
				temporal[i] = ' ';
				longitud++;
			}
			else{
				temporal[i]= '_';
				longitud++;
			}
		}

	 inicial = 1;
	 temporal[longitud] = '\0';
	 for(i=0; i<stdrelen(rep); i++){
		if (rep[i] == pal){
			repetido = 1;
			break;
		 }
		 else{
			repetido=0
	    	}
	     if(reptido == 0){
	    	for(i=0;i<strelem(frase); i++){
	    		if(frase[i] == pal){
	    			temporal[i] = pal;
	    			acertado++;
	    			temp=1;
				}
				
			}
			if(reptido == 0){
				oportunidades = oportunidades - 1;
			}
			else{
				cout<<"Ya se ah introducido esta letra";
				cout<<"\n\n";
			}
			cout<<"\n";
			if(strcmp(frase,temporal) == 0){
				gano = 1;
				break;
			}
			cout<<"\n letras acertadas: "<<acertados;
			cout<<"\n Oportunuidades restantes: "<<oportunidades;
			cout<<"\n";
			rep[j] = pal;
			j++;
			if(oportunidades==0){
				break;
			}
		cout<<" Introduzca una letra: ";
		cin>>pal;
		}	
		while(oportunidades != 0);
		if(gano){
			cout<<"\n\n Enhorabuena, has ganado sigue como vaas.";
		}
		else{
			cout<<"\n\n Has perdido lo sentimos";
			}
			
	}
cout<<"\n\n";
cin.get();
return 0;		
	
	
	
}
	char frase[60],rep[100],temporal[100];
	char pal;
	int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
	int repetido=0,gano=0;
	cout<<" ** Bienvenidos a este su juego de ahorcado ** \n\n";
	cout<<"Ingresa la palabara que tendra que adivinar el jugador: ";
	gets(frase);
	system("cls");
	longitud = 0;
	inicial = 0;
	j=0;
	rep[0] = ' ';
	rep[1] = '\0';
	do{
		system("cls");
		temp = 0;
		if(inicial == 0){
			
			for(i=0;i<strlen(frase);i++);
			if(frase[i]==' '){
				temporal[i] = ' ';
				longitud++;
			}
			else{
				temporal[i]= '_';
				longitud++;
			}
		}

	 inicial = 1;
	 temporal[longitud] = '\0';
	 for(i=0; i<stdrelen(rep); i++){
		if (rep[i] == pal){
			repetido = 1;
			break;
		 }
		 else{
			repetido=0
	    	}
	     if(reptido == 0){
	    	for(i=0;i<strelem(frase); i++){
	    		if(frase[i] == pal){
	    			temporal[i] = pal;
	    			acertado++;
	    			temp=1;
				}
				
			}
			if(reptido == 0){
				oportunidades = oportunidades - 1;
			}
			else{
				cout<<"Ya se ah introducido esta letra";
				cout<<"\n\n";
			}
			cout<<"\n";
			if(strcmp(frase,temporal) == 0){
				gano = 1;
				break;
			}
			cout<<"\n letras acertadas: "<<acertados;
			cout<<"\n Oportunuidades restantes: "<<oportunidades;
			cout<<"\n";
			rep[j] = pal;
			j++;
			if(oportunidades==0){
				break;
			}
		cout<<" Introduzca una letra: ";
		cin>>pal;
		}	
		while(oportunidades != 0);
		if(gano){
			cout<<"\n\n Enhorabuena, has ganado sigue como vaas.";
		}
		else{
			cout<<"\n\n Has perdido lo sentimos";
			}
			
	}
cout<<"\n\n";
cin.get();
return 0;	
}

