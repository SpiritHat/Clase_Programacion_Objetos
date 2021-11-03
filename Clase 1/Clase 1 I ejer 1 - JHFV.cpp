#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class rectangulo{
	private://atributos
		float largo, ancho;
	public://metodos
		rectangulo(float,float);//costructor 
		void perimetro();
		void area();
};

rectangulo::rectangulo(float _largo,float _ancho){
	ancho=_ancho;
	largo=_largo;	
}
 
void rectangulo::perimetro(){
	float _perimetro;
	_perimetro=(2*largo)+(2*ancho);
	cout<<"El perimetro es "<<_perimetro<<" Cms"<<endl;
} 

void rectangulo::area(){
	float _area;
	_area=(largo*ancho);
	cout<<"El Area es "<<_area<<" Cms2"<<endl;
}

int main(){
	rectangulo r1(6,6);
	r1.perimetro();
	r1.area();
	system("Pause");//getch();
return 0;
}

