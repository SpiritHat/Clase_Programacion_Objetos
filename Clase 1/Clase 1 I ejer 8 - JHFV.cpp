#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class oper_log{
	private://atributos
		float A, B;
	public://metodos
		oper_log(int,int);//costructor 
		void oper_and();
		void oper_or();
};

oper_log::oper_log(int _A,int _B){
	A=_A;
	B=_B;	
}
 
void oper_log::oper_and(){
	if(A==B&&A==1){
		cout<<A<<" * "<<B<<" = 1"<<endl;
	}else{
		cout<<A<<" * "<<B<<" = 0"<<endl;
	}
} 

void oper_log::oper_or(){
	if(A==B&&A==0){
		cout<<A<<" * "<<B<<" = 0"<<endl;
	}else{
		cout<<A<<" * "<<B<<" = 1"<<endl;
	}
}

int main(){
	oper_log r1(0,1);
	r1.oper_and();
	r1.oper_or();
	getch();
return 0;
}
