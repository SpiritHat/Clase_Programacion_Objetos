#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class forma{
	private:
		string color;
	public:
		forma(string);
		void mostrarF();	
};

class circulo:public forma{
	private:
		float radio;
	public:
		circulo(string,float);
		void mostrarC();	
};

class linea:public forma{
	private:
		float longitud;
		float grosor;
	public:
		linea(string,float,float);
		void mostrarL();	
};

class triangulo:public forma{
	private:
		float anguloA;
		float anguloB;
		float anguloC;
	public:
		triangulo(string,float,float,float);
		void mostrarT();	
};

forma::forma(string _color){
	color=_color;
}

circulo::circulo(string _color,float _radio):forma(_color){
	radio=_radio;
}

linea::linea(string _color, float _longitud,float _grosor):forma(_color){
	longitud=_longitud;
	grosor=_grosor;
}

triangulo::triangulo(string _color,float _anguloA,float _anguloB,float _anguloC):forma(_color){
	anguloA=_anguloA;
	anguloB=_anguloB;
	anguloC=_anguloC;
}

void forma::mostrarF(){
	cout<<"Color: "<<color<<endl;
}

void circulo::mostrarC(){
	cout<<"Circulo"<<endl;
	mostrarF();
	cout<<"Radio: "<<radio<<"cm"<<endl<<endl;
}

void linea::mostrarL(){
	cout<<"Linea"<<endl;
	mostrarF();
	cout<<"Longitud: "<<longitud<<"cm"<<endl;
	cout<<"Grosor: "<<grosor<<"mm"<<endl<<endl;
}

void triangulo::mostrarT(){
	cout<<"Triangulo"<<endl;
	mostrarF();
	cout<<"Angulo A: "<<anguloA<<endl;
	cout<<"Angulo B: "<<anguloB<<endl;
	cout<<"Angulo C: "<<anguloC<<endl<<endl;
}

int main(){
	circulo c1("Azul",11.6);
	c1.mostrarC();
	linea l1("Gris",5,2);
	l1.mostrarL();
	triangulo t1("Amarillo",30,20,30);
	t1.mostrarT();
	getch();
	return 0;
}
