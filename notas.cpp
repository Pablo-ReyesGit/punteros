#include<iostream>
using namespace std;
int main(){
	int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"ingrese nota "<<total<<endl;
		cin>>notas[total];
		total++;
		cout<<"desea ingresar otra nota"<<endl;
		cin>>res;
	}	while(res=='s' || res=='S');
	
	cout<<"mostrar notas"<<endl;
	for(int i=0;i<total;i++){
		cout<<*p_notas<<endl;
		p_notas++;
	}
	system("pause");
}
