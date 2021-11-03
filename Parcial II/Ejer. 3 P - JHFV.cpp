#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class libro{
	private:
		string titulo;
		int cantidad;
	public:
		libro();
		void setlibro(string,int);
		string gettitulo();
		int getcantidad();
		void mostrar();
		void prestamo();
		void devolucion();	
};

libro::libro(){
}

void libro::setlibro(string _titulo,int _cantidad){
	titulo=_titulo;
	cantidad=_cantidad;
}

string libro::gettitulo(){
	return titulo;
}

int libro::getcantidad(){
	return cantidad;
}

void libro::mostrar(){
	cout<<"Titulo: "<<titulo<<endl<<"Cantidad: "<<cantidad<<endl<<endl;
}

void libro::prestamo(){
	int pres=0;
	cout<<"Libros a prestar: ";
	cin>>pres;
	cantidad=cantidad-pres;
	system("cls");
	mostrar();
	cout<<"Se presto "<<pres<<" libro(s)"<<endl<<endl;
	getch();
}

void libro::devolucion(){
	int devo=0;
	cout<<"Libros a devolver: ";
	cin>>devo;
	cantidad=cantidad+devo;
	system("cls");
	mostrar();
	cout<<"Se devolvio "<<devo<<" libro(s)"<<endl<<endl;
	getch();
}

int main(){
	libro l1;
	l1.setlibro("Mil años de soledad",5);
	l1.mostrar();
	l1.prestamo();
	l1.devolucion();
}
