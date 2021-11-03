#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class abc{
	private:
		int posicion;
		char nombre[15];
		char letra[5];
	public:
		abc(int);
		abc(char *);
		mostrar();	
};

abc::abc(int _posicion){
	posicion=_posicion;
	switch(posicion){
		case 1: strcpy(letra,"A"); break;
		case 2: strcpy(letra,"B"); break;	
		case 3: strcpy(letra,"C"); break;
		case 4: strcpy(letra,"D"); break;
		case 5: strcpy(letra,"E"); break;
		case 6: strcpy(letra,"F"); break;
		case 7: strcpy(letra,"G"); break;
		case 8: strcpy(letra,"H"); break;
		case 9: strcpy(letra,"I"); break;
		case 10: strcpy(letra,"J"); break;
		case 11: strcpy(letra,"K"); break;
		case 12: strcpy(letra,"L"); break;
		case 13: strcpy(letra,"M"); break;
		case 14: strcpy(letra,"N"); break;
		case 15: strcpy(letra,"O"); break;
		case 16: strcpy(letra,"P"); break;
		case 17: strcpy(letra,"Q"); break;
		case 18: strcpy(letra,"R"); break;
		case 19: strcpy(letra,"S"); break;
		case 20: strcpy(letra,"T"); break;
		case 21: strcpy(letra,"U"); break;
		case 22: strcpy(letra,"V"); break;
		case 23: strcpy(letra,"W"); break;
		case 24: strcpy(letra,"X"); break;
		case 25: strcpy(letra,"Y"); break;
		case 26: strcpy(letra,"Z"); break;
	}
}

abc::abc(char * _nombre){
	strcpy(nombre,_nombre);
	if(strcmp(nombre,"A")==0){
		strcpy(letra,"A");
	}
	if(strcmp(nombre,"Be")==0){
		strcpy(letra,"B");
	}
	if(strcmp(nombre,"Ce")==0){
		strcpy(letra,"C");
	}
	if(strcmp(nombre,"De")==0){
		strcpy(letra,"D");
	}
	if(strcmp(nombre,"E")==0){
		strcpy(letra,"E");
	}
	if(strcmp(nombre,"Efe")==0){
		strcpy(letra,"F");
	}
	if(strcmp(nombre,"Ge")==0){
		strcpy(letra,"G");
	}
	if(strcmp(nombre,"Hache")==0){
		strcpy(letra,"H");
	}
	if(strcmp(nombre,"I")==0){
		strcpy(letra,"I");
	}
	if(strcmp(nombre,"Jota")==0){
		strcpy(letra,"J");
	}
	if(strcmp(nombre,"Ka")==0){
		strcpy(letra,"K");
	}
	if(strcmp(nombre,"Ele")==0){
		strcpy(letra,"L");
	}
	if(strcmp(nombre,"Eme")==0){
		strcpy(letra,"M");
	}
	if(strcmp(nombre,"Ene")==0){
		strcpy(letra,"N");
	}
	if(strcmp(nombre,"O")==0){
		strcpy(letra,"O");
	}
	if(strcmp(nombre,"Pe")==0){
		strcpy(letra,"P");
	}
	if(strcmp(nombre,"Cu")==0){
		strcpy(letra,"Q");
	}
	if(strcmp(nombre,"Erre")==0){
		strcpy(letra,"R");
	}
	if(strcmp(nombre,"Ese")==0){
		strcpy(letra,"S");
	}
	if(strcmp(nombre,"Te")==0){
		strcpy(letra,"T");
	}
	if(strcmp(nombre,"U")==0){
		strcpy(letra,"U");
	}
	if(strcmp(nombre,"Uve")==0){
		strcpy(letra,"V");
	}
	if(strcmp(nombre,"Doble uve")==0){
		strcpy(letra,"W");
	}
	if(strcmp(nombre,"Equis")==0){
		strcpy(letra,"X");
	}
	if(strcmp(nombre,"Ye")==0){
		strcpy(letra,"Y");
	}
	if(strcmp(nombre,"Zeta")==0){
		strcpy(letra,"Z");
	}
}

abc::mostrar(){
	cout<<"La letra es: "<<letra<<endl;
}

int main(){
	abc obj(6);
	obj.mostrar();
	abc obj1("Ele");
	obj1.mostrar();
	cout<<endl;
	system("pause");
	return 0;
}
