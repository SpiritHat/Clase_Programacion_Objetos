#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class suma{
 private://atributos
 	float a, b;
 public://metodos
 	suma(float,float);//costructor 
	void suma1();
};

suma::suma(float _a,float _b){
 	b=_b;
	a=_a;	
 }
 
void suma::suma1(){
	float _resultado;
	_resultado=a + b;
	cout<<"El rsultado es "<<_resultado<<endl;
 } 

int main(){
suma s1(6,6);
s1.suma1();
system("Pause");//getch();
return 0;
}
