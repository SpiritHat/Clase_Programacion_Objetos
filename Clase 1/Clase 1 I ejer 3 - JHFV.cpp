#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class triangulo{
 private://atributos
 	float largo, ancho;
 public://metodos
 	triangulo(float,float);//costructor 
	void perimetro();
 	void area();
 	
};

triangulo::triangulo(float _largo,float _ancho){
 	ancho=_ancho;
	largo=_largo;	
}
 
void triangulo::perimetro(){
	float _perimetro;
	_perimetro=(2*largo)+(2*ancho)/2;
	cout<<"El perimetro es "<<_perimetro<<" Cms"<<endl;
} 

void triangulo::area(){
	float _area;
	_area=(largo*ancho)/2;
	cout<<"El Area es "<<_area<<" Cms2"<<endl;
}

int main(){
triangulo r1(6,6);
r1.perimetro();
r1.area();
system("Pause");//getch();
return 0;
}
