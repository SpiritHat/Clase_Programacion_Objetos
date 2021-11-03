#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class persona{
	private:
		string nombre;
		int edad;
		string cc;
	public:
		persona();
		void setpersona(string,int,string);
		string getnombre();
		int getedad();
		string getcc();
		void mostrar();	
		void mayor_edad();
};

persona::persona(){
}

void persona::setpersona(string _nombre,int _edad, string _cc){
	nombre=_nombre;
	edad=_edad;
	cc=_cc;
}

string persona::getnombre(){
	return nombre;
}
                                                                                                                                     
int persona::getedad(){
	return edad;
}

string persona::getcc(){
	return cc;
}

void persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl<<"Edad: "<<edad<<endl<<"Cedula: "<<cc<<endl;
}

void persona::mayor_edad(){
	if(edad>=18){
		cout<<"La persona es mayor de edad"<<endl;
	}else{
		cout<<"La persona es menor de edad"<<endl;
	}
}

main(){
	persona p1;
	p1.setpersona("harold",18,"1046546215");
	p1.mostrar();
	p1.mayor_edad();
	getch();
	return 0;
}
