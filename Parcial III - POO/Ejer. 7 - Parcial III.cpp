#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

/*Realizar un programa usando los métodos getter y setter que permita controlar el alquiler de vehículos, (motos y autos ).. Puedes usar los atributos y métodos que necesites*/

class alquiler {
	private: 
		char nombre[40][40]={"n/a","n/a","n/a","stiven"};
		char tipo[40][40]={"auto","moto","moto","auto"};
		char modelo[40][40]={"Hiunda","Yamaha","Suzuki","Toyota"};
		char estado[40][40]={"Disponible","Disponible","Disponible","Prestado"};
		int n;
	public:
		alquiler();
		void getmostrar(int);
		void getalquilar(char*,char*);
		void getdevolver(char*);
};

alquiler::alquiler(){
}

void alquiler::getmostrar(int _n){
	int x=0,ca=0,cb=0;
	n=_n;
	system("cls");
	cout<<"Vehiculos Disponibles"<<endl<<endl;
	for(x=0;x<n;x++){
		if(strcmp(estado[x],"Disponible")==0){
			cout<<"Tipo: "<<tipo[x]<<"      Modelo: "<<modelo[x]<<endl;
			ca++;
		}
	}
	if(ca==0){
		cout<<"No hay vehiculos disponibles"<<endl;
	}
	cout<<endl<<endl<<"Vehiculos Alquilados"<<endl<<endl;
	for(x=0;x<n;x++){
		if(strcmp(estado[x],"Prestado")==0){
			cout<<"Tipo: "<<tipo[x]<<"      Modelo: "<<modelo[x]<<"       Nombre: "<<nombre[x]<<endl;
			cb++;
		}
	}
	if(cb==0){
		cout<<"No hay vehiculos alquilados"<<endl;
	}
	getch();
}

void alquiler::getalquilar(char* nom,char* op){
	int x=0,c=0,alq;
	cout<<endl<<endl;
	for(x=0;x<n;x++){
		if(strcmp(tipo[x],op)==0 && strcmp(estado[x],"Disponible")==0){
			cout<<"ID: "<<x+1<<"   Vehiculo: "<<modelo[x]<<" - "<<tipo[x]<<endl;
			c++;
		}
	}
	if(c==0){
		cout<<"No hay vehiculos disponibles"<<endl;
	}else{
		cout<<endl<<"Seleccione el ID del vehiculo a alquilar: ";cin>>alq;
		strcpy(nombre[alq-1],nom);
		strcpy(estado[alq-1],"Prestado");
	}
	
}

void alquiler::getdevolver(char* nom){
	int x=0,c=0,del;
	cout<<endl<<endl;
	for(x=0;x<n;x++){
		if(strcmp(nombre[x],nom)==0){
			cout<<"Es este el vehiculo alquilado? (1 - si / 2 - no)"<<endl<<endl;
			cout<<"ID: "<<x+1<<"   Vehiculo: "<<modelo[x]<<" - "<<tipo[x]<<"    Nombre: "<<nombre[x]<<endl;
			c++;
			cout<<endl<<"Confirmacion: ";cin>>del;
			if(del==1){
				strcpy(nombre[x],"n/a");
				strcpy(estado[x],"Disponible");
			}
		}
	}
	if(c==0){
		cout<<"No hay vehiculos alquilados a ese nombre"<<endl;
	}
}

int main(){
	char aux[40],aux1[40],aux2[40];
	alquiler al;
	al.getmostrar(4);
	system("cls");
	cout<<"Alquilar un vehiculo"<<endl<<endl;
	cout<<"Nombre: ";cin>>aux;
	cout<<"Tipo de vehiculo: ";cin>>aux1;
	al.getalquilar(aux,aux1);
	al.getmostrar(4);
	system("cls");
	cout<<"Devolver un vehiculo"<<endl<<endl;
	cout<<"alquilado por: ";cin>>aux2;
	al.getdevolver(aux2);
	al.getmostrar(4);
	getch();
	return 0;
}
