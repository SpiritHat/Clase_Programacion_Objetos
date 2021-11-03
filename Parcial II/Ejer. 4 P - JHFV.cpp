#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class OperacinesBasicas{
	private:
		float A;
		float B;
		float C;
		float D;
	public:
		OperacinesBasicas();
		void setOperacinesBasicas(float,float,float,float);
		float getA();
		float getB();
		float getC();
		float getD();
		void mostrar();
		void sumar();
		void restar();
		void multiplicar();
		void dividir();
};

OperacinesBasicas::OperacinesBasicas(){
}

void OperacinesBasicas::setOperacinesBasicas(float _A,float _B,float _C,float _D){
	A=_A;
	B=_B;
	C=_C;
	D=_D;
}

float OperacinesBasicas::getA(){
	return A;
}

float OperacinesBasicas::getB(){
	return B;
}

float OperacinesBasicas::getC(){
	return C;
}

float OperacinesBasicas::getD(){
	return D;
}

void OperacinesBasicas::mostrar(){
	cout<<endl<<"Numero A: "<<A<<"/"<<B<<endl<<"Numero B: "<<C<<"/"<<D<<endl;
}

void OperacinesBasicas::sumar(){
	float r1=0,r2=0;
	if(B==D){
		r2=D;
		r1=A+C;
	}else{
		r2=B*D;
		r1=(A*D)+(B*C);
	}
	cout<<endl<<"Suma"<<endl;
	cout<<A<<"/"<<B<<" + "<<C<<"/"<<D<<" = "<<r1<<"/"<<r2<<endl<<endl;
}

void OperacinesBasicas::restar(){
	float r1=0,r2=0;
	if(B==D){
		r2=D;
		r1=A-C;
	}else{
		r2=B*D;
		r1=(A*D)-(B*C);
	}
	cout<<endl<<"Resta"<<endl;
	cout<<A<<"/"<<B<<" - "<<C<<"/"<<D<<" = "<<r1<<"/"<<r2<<endl<<endl;
}

void OperacinesBasicas::multiplicar(){
	float r1=0,r2=0,E=0,F=0;
	r1=A*C;
	r2=B*D;
	E=r1;
	F=r2;
	while (E != F) {
    if (E > F)
      E = E - F;
    else
      F = F - E;
 	}
 	r1=r1/E;
 	r2=r2/E;
	cout<<endl<<"Multiplicacion"<<endl;
	cout<<A<<"/"<<B<<" x "<<C<<"/"<<D<<" = "<<r1<<"/"<<r2<<endl<<endl;
}

void OperacinesBasicas::dividir(){
	float r1=0,r2=0,E=0,F=0;
	r1=A*D;
	r2=B*C;
	E=r1;
	F=r2;
	while (E != F) {
    if (E > F)
      E = E - F;
    else
      F = F - E;
 	}
 	r1=r1/E;
 	r2=r2/E;
	cout<<endl<<"Division"<<endl;
	cout<<A<<"/"<<B<<" / "<<C<<"/"<<D<<" = "<<r1<<"/"<<r2<<endl<<endl;
}

int main(){
	OperacinesBasicas ob1;
	ob1.setOperacinesBasicas(2,2,5,2);
	ob1.mostrar();
	ob1.sumar();
	ob1.restar();
	ob1.multiplicar();
	ob1.dividir();
	getch();
	return 0;
}
