#include<iostream>
using namespace std;
int main(){
	int total = 0, *p_notas;
	p_notas = new int[total];
	char res;
	
	
	do{
		cout<<"ingrese nota "<<total<<endl;
		cin>>p_notas[total];
		total++;
		cout<<"desea ingresar otra nota"<<endl;
		cin>>res;
	}	while(res=='s' || res=='S');
	
	cout<<"mostrar notas"<<endl;
	for(int i=0;i<total;i++){
		cout<<*p_notas<<endl;
		p_notas++;
	}
	delete[] p_notas;
	
	system("pause");
}
