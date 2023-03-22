#include<iostream>
using namespace std;
int main(){
	int filas, columnas, **p_notas;
	cout<<"ingrese la cantidad de estudiantes"<<endl;
	cin>>filas;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>columnas;
	
	p_notas = new int *[filas];
	for(int i=0; i<filas;i++){
		p_notas[i] = new int[columnas];
	}
	
	for(int i=0; i<filas;i++){
		cout<<"________estudiante_______"<<i<<endl;
		for(int j=0; j<columnas;j++){
			cout<<"estudiante "<<i<<" , nota "<<j<<endl;
			cin>>*(*(p_notas+i)+j);
		}
		cout<<"________________________"<<endl;	
	}
	cout<<"\n ______mostrar notas______"<<endl;
	for(int i=0; i<filas;i++){
		cout<<"________estudiante______"<<i<<endl;
		for(int j=0; j<columnas;j++){
			cout<<*(*(p_notas+i)+j)<<endl;
		}
		cout<<"________________________"<<endl;	
	}
	
	for(int j=0; j<columnas;j++){
		delete [] p_notas[j];
	}
	delete [] p_notas;
	system("pause");
}
