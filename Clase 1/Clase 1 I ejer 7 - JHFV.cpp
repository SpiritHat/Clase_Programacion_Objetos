#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class comparar{
	private://atributos
		float A, B;
	public://metodos
		comparar(float,float);//costructor 
		void mayor();
		void menor();
		void igual();
};

comparar::comparar(float _A,float _B){
	B=_B;
	A=_A;	
}

void comparar::mayor(){
	if(A>B){
		cout<<A<<" es mayor a "<<B<<endl<<endl;
	}else{
		cout<<A<<" no es mayor a "<<B<<endl<<endl;
	}
}

void comparar::menor(){
	if(A<B){
		cout<<A<<" es menor a "<<B<<endl<<endl;
	}else{
		cout<<A<<" no es menor a "<<B<<endl<<endl;
	}
}

void comparar::igual(){
	if(A==B){
		cout<<A<<" es igual a "<<B<<endl<<endl;
	}else{
		cout<<A<<" no es igual a "<<B<<endl<<endl;
	}
}

int main(){
	comparar r1(8,6);
	r1.mayor();
	r1.menor();
	r1.igual();
	getch();
return 0;
}
