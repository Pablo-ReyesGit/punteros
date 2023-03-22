#include<iostream>
using namespace std;
int main(){
	int edad = 19, *p_edad;
	p_edad = &edad;
	
	cout<<"edad: "<<*p_edad<<endl;
	cout<<"puntero de edad: "<<&p_edad<<endl;
	cout<<"cambiando valor de edad"<<endl;
	
	*p_edad = 20;
	cout<<"edad: "<<*p_edad<<endl;
	cout<<"puntero de edad: "<<&p_edad<<endl;
	return 0;
}
