#include<iostream>
using namespace std;
int main(){
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
