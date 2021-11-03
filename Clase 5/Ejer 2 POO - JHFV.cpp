#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class semana{
	private:
		int posicion;
		char ingles[15];
		char dia[15];
	public:
		semana(int);
		semana(char *);
		mostrar();	
};

semana::semana(int _posicion){
	posicion=_posicion;
	switch(posicion){
		case 1: strcpy(dia,"Lunes"); break;
		case 2: strcpy(dia,"Martes"); break;	
		case 3: strcpy(dia,"Miercoles"); break;
		case 4: strcpy(dia,"Jueves"); break;
		case 5: strcpy(dia,"Viernes"); break;
		case 6: strcpy(dia,"Sabado"); break;
		case 7: strcpy(dia,"Domingo"); break;
	}
}

semana::semana(char * _ingles){
	strcpy(ingles,_ingles);
	if(strcmp(ingles,"Monday")==0){
		strcpy(dia,"Lunes");
	}
	if(strcmp(ingles,"Tuesday")==0){
		strcpy(dia,"Martes");
	}
	if(strcmp(ingles,"Webnesday")==0){
		strcpy(dia,"Miercoles");
	}
	if(strcmp(ingles,"Thursday")==0){
		strcpy(dia,"Jueves");
	}
	if(strcmp(ingles,"Friday")==0){
		strcpy(dia,"Viernes");
	}
	if(strcmp(ingles,"Saturday")==0){
		strcpy(dia,"Sabado");
	}
	if(strcmp(ingles,"Sunday")==0){
		strcpy(dia,"Domingo");
	}
}

semana::mostrar(){
	cout<<"El dia es: "<<dia<<endl;
}

int main(){
	semana obj1(3);
	obj1.mostrar();
	semana obj2("Monday");
	obj2.mostrar();
	cout<<endl;
	system("pause");
	return 0;
}
