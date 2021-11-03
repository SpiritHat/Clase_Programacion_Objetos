#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class cuenta{
	private:
		string codigo;
		string titular;
		int cantidad;
	public:
		cuenta();
		void setcuenta(string,string,int);
		string getcodigo();
		string gettitular();
		int getcantidad();
		void mostrar();
		void ingreso();
		void transfer();	
};

cuenta::cuenta(){
}

void cuenta::setcuenta(string _codigo,string _titular,int _cantidad){
	codigo=_codigo;
	titular=_titular;
	cantidad=_cantidad;
}

string cuenta::getcodigo(){
	return codigo;
}

string cuenta::gettitular(){
	return titular;
}

int cuenta::getcantidad(){
	return cantidad;
}

void cuenta::mostrar(){
	cout<<"Codigo: "<<codigo<<endl<<"Titular: "<<titular<<endl<<"Cantidad: "<<cantidad<<endl;
}

void cuenta::ingreso(){
	int ingre=0;
	cout<<endl<<"Digite la cantida a ingresar: ";
	cin>>ingre;
	cantidad=cantidad+ingre;
	system("cls");
	mostrar();
	cout<<endl<<"Se ingreso "<<ingre<<" a su cuenta"<<endl;
	getch();
}

void cuenta::transfer(){
	int tran=0;
	string cod;
	cout<<endl<<"Digite el codigo  de la cuenta a transferir: ";
	cin>>cod;
	cout<<"Digite la cantidad a transferir: ";
	cin>>tran;
	cantidad=cantidad-tran;
	system("cls");
	mostrar();
	cout<<endl<<"Se transfirio "<<tran<<" de su cuenta";
	getch();
}

int main(){
	cuenta c1;
	c1.setcuenta("1252633","Harold Franco",200000);
	c1.mostrar();
	c1.ingreso();
	c1.transfer();
	return 0;
}
