#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class contador{
	private:
		int num;
	public:
		contador();
		void setcontador(int);	
		int getnum();
		void mostrar();
		void incrementar();
		void decrementar();
};

contador::contador(){
}

void contador::setcontador(int _num){
	num=_num;
}

int contador::getnum(){
	return num;
}

void contador::mostrar(){
	cout<<"Contador "<<endl<<num<<endl;
}

void contador::incrementar(){
	int incre=0;
	cout<<endl<<"Cantidad a incrementar: ";
	cin>>incre;
	num=num+incre;
	system("cls");
	mostrar();
	cout<<"Se incremento en "<<incre<<endl;
}

void contador::decrementar(){
	int decre=0;
	cout<<endl<<"Cantidad a decrementar: ";
	cin>>decre;
	num=num-decre;
	system("cls");
	mostrar();
	cout<<"Se decremento en "<<decre<<endl;
}

int main(){
	contador co1;
	co1.setcontador(5);
	co1.mostrar();
	co1.incrementar();
	co1.decrementar();
	getch();
	return 0;
}
