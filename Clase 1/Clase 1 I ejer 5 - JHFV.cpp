#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class oper_mate{
	private://atributos
		float var1, var2;
	public://metodos
		oper_mate(float,float);//costructor 
		void suma();
		void resta();
		void multi();
		void divi();
};

oper_mate::oper_mate(float _var1,float _var2){
 	var2=_var2;
	var1=_var1;	
}
 
void oper_mate::suma(){
	float _suma;
	_suma=var1+var2;
	cout<<"El suma es "<<_suma<<endl<<endl;
} 

void oper_mate::resta(){
	float _resta;
	_resta=var1-var2;
	cout<<"El resta es "<<_resta<<endl<<endl;
}

void oper_mate::multi(){
	float _resta;
	_resta=var1*var2;
	cout<<"El resta es "<<_resta<<endl<<endl;
}

void oper_mate::divi(){
	float _resta;
	_resta=var1/var2;
	cout<<"El resta es "<<_resta<<endl<<endl;
}

int main(){
	oper_mate r1(6,6);
	r1.suma();
	r1.resta();
	r1.multi();
	r1.divi();
	getch();
return 0;
}
