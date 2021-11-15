#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class avion{
	private:
		char origen[40][40]={"cali","bogota","medellin","pereira","catagena"};
		char destino[40][40]={"bogota","san_andres","cali","medellin","pereira"};
		char ruta[40][40]={"Ruta_2A","Ruta_33A","Ruta_P23","Ruta_L2L","Ruta_9P"};
		int distancia[40]={400000,600000,750000,350000,800000};
		int tiempo[40]={NULL,NULL,NULL,NULL,NULL};
		int velocidad[40]{NULL,NULL,NULL,NULL,NULL};
		int n;
	public:
		avion();
		void getmostrar(int);
		void getmostarruta(int);
		void getdatos(int);
};

avion::avion(){
}

void avion::getmostrar(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de vuelos"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Posicion Vector "<<x+1<<endl;
		cout<<"Origen: "<<origen[x]<<endl;
		cout<<"Destino: "<<destino[x]<<endl;
		cout<<"Distacia: "<<distancia[x]<<" km"<<endl;
		cout<<"Tiempo: "<<tiempo[x]<<" h"<<endl;
		cout<<"Velocidad: "<<velocidad[x]<<" km/h"<<endl<<endl;
	}
	getch();
}

void avion::getmostarruta(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de rutas de vuelos"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Posicion Vector "<<x+1<<endl;
		cout<<"Origen: "<<origen[x]<<endl;
		cout<<"Destino: "<<destino[x]<<endl;
		cout<<"Ruta: "<<ruta[x]<<endl<<endl;
	}
	getch();
}

void avion::getdatos(int _n){
	int x=0,a=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Agregar tiempo a los vuelos (Horas)"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Posicion Vector "<<x+1<<endl;
		cout<<"Origen: "<<origen[x]<<endl;
		cout<<"Destino: "<<destino[x]<<endl;
		cout<<"Ruta: "<<ruta[x]<<endl;
		cout<<"Tiempo: ";cin>>a;cout<<endl<<endl;
		tiempo[x]=a;
		velocidad[x]=distancia[x]/tiempo[x];
	}
	getch();
}

int main(){
	avion obj;
	obj.getmostrar(5);
	obj.getmostarruta(5);
	obj.getdatos(5);
	obj.getmostrar(5);
	getch();
	return 0;
}
