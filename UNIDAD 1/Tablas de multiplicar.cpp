#include "iostream"
using namespace std;
int main(){
	int a;
	int num;
	cout<<"Inserta el numero de la tabla que quieres multiplicar"<<endl;
	cin>>num;
	
	for(a=1;a<=10;a++){
	cout<<(a*num)<<endl;
	}
		
	return 0;
}
