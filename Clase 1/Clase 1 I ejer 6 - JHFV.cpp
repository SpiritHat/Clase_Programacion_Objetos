#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

class circunferencia{
	private://atributos
		float largo,ancho,radio;
	public://metodos
		circunferencia(float,float,float);//costructor 
		void perimetro();
		void area();
};

circunferencia::circunferencia(float _largo,float _ancho,float _radio){
	ancho=_ancho;
	largo=_largo;
	radio=_radio;	
}
 
void circunferencia::perimetro(){
	float _perimetro;
	_perimetro=2*M_PI*radio;
	cout<<"El perimetro es "<<_perimetro<<" Cms"<<endl;
} 

void circunferencia::area(){
	float _area;
	_area=M_PI*pow(radio,2);
	cout<<"El Area es "<<_area<<" Cms2"<<endl;
}

int main(){
	circunferencia r1(6,6,10);
	r1.perimetro();
	r1.area();
	getch();
return 0;
}
