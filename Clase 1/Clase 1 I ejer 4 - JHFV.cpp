#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class rombo{
 private://atributos
 	float largo,ancho,lado;
 public://metodos
 	rombo(float,float,float);//costructor 
	void perimetro();
 	void area();
};

rombo::rombo(float _largo,float _ancho,float _lado){
	ancho=_ancho;
	largo=_largo;
	lado=_lado;
 }
 
void rombo::perimetro(){
	float _perimetro;
	_perimetro=lado*4;
	cout<<"El perimetro es "<<_perimetro<<" Cms"<<endl;
 } 

void rombo::area(){
	float _area;
	_area=(largo*ancho)/2;
	cout<<"El Area es "<<_area<<" Cms2"<<endl;
}

int main(){
rombo r1(6,8,5);
r1.perimetro();
r1.area();
system("Pause");//getch();
return 0;
}
