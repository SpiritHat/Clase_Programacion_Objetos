#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class empleado{
	private:
		string nombre;
		int pagohora;
		int horastrabajo;
	public:
		empleado();
		void setempleado(string,int,int);
		string getnombre();
		int getpagohora();
		int gethorastrabajo();
		void mostrar();
		void pagarsalario();
		void horasextra();
};

empleado::empleado(){
}

void empleado::setempleado(string _nombre, int _pagohora, int _horastrabajo){
	nombre=_nombre;
	pagohora=_pagohora;
	horastrabajo=_horastrabajo;
}

string empleado::getnombre(){
	return nombre;
}

int empleado::getpagohora(){
	return pagohora;
}

int empleado::gethorastrabajo(){
	return horastrabajo;
}

void empleado::mostrar(){
	cout<<"Nombre: "<<nombre<<endl<<"Pago/hora: "<<pagohora<<endl<<"Horas trabajadas: "<<horastrabajo<<endl<<endl;
}

void empleado::pagarsalario(){
	int salario=pagohora*horastrabajo;
	cout<<"Salario: "<<salario<<endl;
}

void empleado::horasextra(){
	int extra=0;
	if(horastrabajo>8){
		extra=horastrabajo-8;
		cout<<"Horas extras: "<<extra<<endl;
	}else{
		cout<<"Sin horas extras"<<endl;
	}
}

int main(){
	empleado em1;
	em1.setempleado("Harold Franco",1200,10);
	em1.mostrar();
	em1.pagarsalario();
	em1.horasextra();
	cout<<endl<<endl;
	system("pause");
	return 0;
}
