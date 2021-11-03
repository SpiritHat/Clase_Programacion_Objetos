#include<iostream>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class persona{
	private:
		string nombre;
		int edad;
	public:
		persona(string,int);
		void mostrar();
};

class alumno:public persona{
	private:
		string codigo;
		float nota;
	public:
		alumno(string,int,string,float);
		void mostrarA();
};

alumno::alumno(string _nombre, int _edad, string _codigo,float _nota):persona(_nombre, _edad){
	codigo=_codigo;
	nota=_nota;
}

persona::persona(string _nombre, int _edad){
	nombre=_nombre;
	edad=_edad;
}

void persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void alumno::mostrarA(){
	mostrar();
	cout<<"Codigo Alumno: "<<codigo<<endl;
	cout<<"Nota Final: "<<nota<<endl;	
}

int main(){
	alumno alumno1("Alex",22,"14452254",4.4);
	alumno1.mostrarA();
	system("pause");
	return 0;
}
