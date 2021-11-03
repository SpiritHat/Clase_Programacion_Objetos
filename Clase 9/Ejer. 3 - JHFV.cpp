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
		string cc;
		string genero;
	public:
		persona(string,string,string);
		void mostrarP();	
};

class estudiante:public persona{
	private:
		string semestreE;
		float notafinal;
	public:
		estudiante(string,string,string,string,float);
		void mostrarE();	
};

class profesor:public persona{
	private:
		string asignatura;
		string semestreP;
		string programa;
	public:
		profesor(string,string,string,string,string,string);	
		void mostrarProf();
};

estudiante::estudiante(string _nombre,string _cc,string _genero,string _semestreE,float _notafinal):persona(_nombre,_cc,_genero){
	semestreE=_semestreE;
	notafinal=_notafinal;
}

profesor::profesor(string _nombre,string _cc,string _genero,string _asignatura,string _semestreP,string _programa):persona(_nombre,_cc,_genero){
	asignatura=_asignatura;
	semestreP=_semestreP;
	programa=_programa;
}

persona::persona(string _nombre,string _cc,string _genero){
	nombre=_nombre;
	cc=_cc;
	genero=_genero;
}

void persona::mostrarP(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"CC: "<<cc<<endl;
	cout<<"Genero: "<<genero<<endl;
}

void estudiante::mostrarE(){
	cout<<endl<<"Estudiante "<<endl;
	mostrarP();
	cout<<"Semestre: "<<semestreE<<endl;
	cout<<"Nota Final: "<<notafinal<<endl;
}

void profesor::mostrarProf(){
	cout<<endl<<"Profesor "<<endl;
	mostrarP();
	cout<<"Asignatura: "<<asignatura<<endl;
	cout<<"Semestre: "<<semestreP<<endl;
	cout<<"Programa: "<<programa<<endl;
}

int main(){
	estudiante estud1("Harold Franco","123456789","Hombre","IV",4.5);
	estud1.mostrarE();
	profesor prof1("Fernanda Lopez","789456123","Mujer","Gestion Ambiental","V","Ingenieria Ambiental");
	prof1.mostrarProf();
	getch();
	return 0;
}

