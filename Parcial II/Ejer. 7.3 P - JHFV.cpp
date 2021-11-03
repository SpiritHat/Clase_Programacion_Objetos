#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class pelicula{
	private:
		string titulo;
		string fecha;
	public:
		pelicula(string,string);
		void mostrarP();	
};

class director:public pelicula{
	private:
		string nombre;
		string premio;
	public:
		director(string,string,string,string);
		void mostrarD();	
};

class calificacion:public pelicula{
	private:
		string calificador;
		string puntaje;
	public:
		calificacion(string,string,string,string);
		void mostrarC();	
};

pelicula::pelicula(string _titulo,string _fecha){
	titulo=_titulo;
	fecha=_fecha;
}

director::director(string _titulo,string _fecha,string _nombre,string _premio):pelicula(_titulo,_fecha){
	nombre=_nombre;
	premio=_premio;
}

calificacion::calificacion(string _titulo,string _fecha,string _calificador, string _puntaje):pelicula(_titulo,_fecha){
	calificador=_calificador;
	puntaje=_puntaje;
}

void pelicula::mostrarP(){
	cout<<"Titulo de la pelicula: "<<titulo<<endl<<"Fecha de estreno: "<<fecha<<endl;
}

void director::mostrarD(){
	cout<<"Director"<<endl;
	mostrarP();
	cout<<"Nombre: "<<nombre<<endl<<"Premio: "<<premio<<endl<<endl;
}

void calificacion::mostrarC(){
	cout<<"Valoracion de la pelicula"<<endl;
	mostrarP();
	cout<<"Calificador: "<<calificador<<endl<<"Calificacion: "<<puntaje<<endl<<endl;
}

int main(){
	director d1("Harry Potter y la piedra filosofal","30/noviembre/2001","Chris Columbus","N/A");
	d1.mostrarD();
	calificacion c1("Transformers","20/julio/2007","Google Users","4.6 / 5");
	c1.mostrarC();
	getch();
	return 0;
}
