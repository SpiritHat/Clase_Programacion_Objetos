#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class libro {
	private:
		char titulo[40][40]={"Mil_anios_de_soledad","El_pricipito","Codigo_davinci","Mariposa_amarilla"};
		char estado[20][40]={"Disponible","Disponible","Disponible","Prestado"};
		int n;
	public:
		libro();
		void getmostrar(int);
		void setprestamo(int);
		void setdevolucion(int);
};

libro::libro(){
}

void libro::getmostrar(int _n){
	int x=0;
	n=_n;
	system("cls");
	cout<<"Libros Disponibles"<<endl<<endl;
	for(x=0;x<n;x++){
		cout<<"Codigo: "<<x+1<<"  Libro: "<<titulo[x]<<"  Estado: "<<estado[x]<<endl<<endl;
	}
}

void libro::setprestamo(int x){
	if(strcmp(estado[x],"Disponible")==0){
		strcpy(estado[x],"Prestado");
		cout<<"Libro prestado"<<endl<<endl;
	}else{
		cout<<"Libro no disponible"<<endl<<endl;
	}
	getch();
}

void libro::setdevolucion(int x){
	if(strcmp(estado[x],"Prestado")==0){
		strcpy(estado[x],"Disponible");
		cout<<"Libro devuelto"<<endl<<endl;
	}else{
		cout<<"Libro esta disponible"<<endl<<endl;
	}
	getch();
}

int main(){
	int cod;
	libro obj1;
	obj1.getmostrar(4);
	cout<<"Digite el codigo del libro a prestar: ";
	cin>>cod;
	obj1.setprestamo(cod-1);
	obj1.getmostrar(4);
	cout<<"Digite el codigo del libro a devolver: ";
	cin>>cod;
	obj1.setdevolucion(cod-1);
	obj1.getmostrar(4);
	getch();
	return 0;
}
