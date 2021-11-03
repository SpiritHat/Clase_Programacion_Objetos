#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class vehiculo{
	private:
		string color;
		int ruedas;
	public:
		vehiculo(string, int);
		void mostrarV();	
};

class automovil:public vehiculo{
	private:
		string marcaA;
		string modelo;
		int puertas;
	public:
		automovil(string,int,string,string,int);
		void mostrarA();
};

class moto:public vehiculo{
	private:
		string marcaM;
		string cilindro;
	public:
		moto(string,int,string,string);
		void mostrarM();	
};

automovil::automovil(string _color,int _ruedas,string _marcaA,string _modelo,int _puertas):vehiculo(_color,_ruedas){
	marcaA=_marcaA;
	modelo=_modelo;
	puertas=_puertas;
}

moto::moto(string _color,int _ruedas,string _marcaM,string _cilindro):vehiculo(_color,_ruedas){
	marcaM=_marcaM;
	cilindro=_cilindro;
}

vehiculo::vehiculo(string _color,int _ruedas){
	color=_color;
	ruedas=_ruedas;
}

void vehiculo::mostrarV(){
	cout<<"Color: "<<color<<endl;
	cout<<"Nr. ruedas: "<<ruedas<<endl;
}

void automovil::mostrarA(){
	mostrarV();
	cout<<"Marca: "<<marcaA<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Nr. puerta: "<<puertas<<endl;
}

void moto::mostrarM(){
	mostrarV();
	cout<<"Marca: "<<marcaM<<endl;
	cout<<"Cilindraje: "<<cilindro<<endl;
}

int main(){
	cout<<"Automovil"<<endl;
	automovil auto1("azul",5,"Toyota","2015-A",6);
	auto1.mostrarA();
	cout<<endl<<endl<<"Motocicleta"<<endl;
	moto moto1("Negro",2,"Yamaha","22Cc-2015");
	moto1.mostrarM();
	getch();
	return 0;
}
