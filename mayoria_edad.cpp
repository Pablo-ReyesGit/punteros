#include<iostream>
using namespace std;
int main(){
	int edad , *p_edad;
	p_edad = &edad;
	cout<<"ingrese edad"<<endl;
	cin>>edad;
	cout<<"edad: "<<*p_edad<<endl;
	cout<<"puntero de edad: "<<&p_edad<<endl;
	
	if(*p_edad >= 18){
		cout<<"mayor de edad"<<endl;
	}else{
		cout<<"menor de edad"<<endl;
	}
	system("pause");
}
