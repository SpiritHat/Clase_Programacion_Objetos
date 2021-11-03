#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class animal{
	private:
		string nombre;
		int patas;
	public:
		animal(string,int);
		void mostrarA();	
};

class perro:public animal{
	private:
		int year;
		float pesoP;
	public:
		perro(string,int,int,float);
		void mostrarP();
};

class gato:public animal{
	private:
		float pesoG;
		float size;
	public:
		gato(string,int,float,float);
		void mostrarG();	
};

perro::perro(string _nombre,int _patas,int _year,float _pesoP):animal(_nombre,_patas){
	year=_year;
	pesoP=_pesoP;
}

gato::gato(string _nombre,int _patas, float _pesoG, float _size):animal(_nombre,_patas){
	pesoG=_pesoG;
	size=_size;
}

animal::animal(string _nombre,int _patas){
	nombre=_nombre;
	patas=_patas;
}

void animal::mostrarA(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Nr. patas: "<<patas<<endl;
}

void perro::mostrarP(){
	cout<<endl<<"Perro"<<endl;
	mostrarA();
	cout<<"Edad: "<<year<<endl;
	cout<<"Peso: "<<pesoP<<endl;
}

void gato::mostrarG(){
	cout<<endl<<"Gato"<<endl;
	mostrarA();
	cout<<"Peso: "<<pesoG<<endl;
	cout<<"Altura: "<<size<<endl;
}

int main(){
	perro p1("Dalmata",4,5,1.1);
	p1.mostrarP();
	gato g1("king",4,2.5,0.8);
	g1.mostrarG();
	getch();
	return 0;	
}
