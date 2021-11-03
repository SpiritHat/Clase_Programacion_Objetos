#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class person{
	private:
		string nombre;
		string cc;
	public:
		person(string,string);
		void mostrarP();	
};

class cliente:public person{
	private:
		string articulo;
		int precio;
	public:
		cliente(string,string,string,int);
		void mostrarCl();	
};

class empleado:public person{
	private:
		string tipo;
		int pago;
	public:
		empleado(string,string,string,int);
		void mostrarE();
};

person::person(string _nombre,string _cc){
	nombre=_nombre;
	cc=_cc;
}

cliente::cliente(string _nombre,string _cc,string _articulo,int _precio):person(_nombre,_cc){
	articulo=_articulo;
	precio=_precio;
}

empleado::empleado(string _nombre,string _cc,string _tipo,int _pago):person(_nombre,_cc){
	tipo=_tipo;
	pago=_pago;
}

void person::mostrarP(){
	cout<<"Nombre: "<<nombre<<endl<<"CC: "<<cc<<endl;
}

void cliente::mostrarCl(){
	cout<<"Factura Cliente"<<endl;
	mostrarP();
	cout<<"Articulo: "<<articulo<<endl<<"Total a pagar: "<<precio<<endl<<endl;
}

void empleado::mostrarE(){
	cout<<"Factura Empleado"<<endl;
	mostrarP();
	cout<<"Tipo de concrato: "<<tipo<<endl<<"Salario: "<<pago<<endl<<endl;
}

int main(){
	cliente cl1("Harold Franco","20245415","Mesa roble 20x20",120000);
	cl1.mostrarCl();
	empleado em1("Henry Velez","75814254","Permanente",1200000);
	em1.mostrarE();
	getch();
	return 0;
}


