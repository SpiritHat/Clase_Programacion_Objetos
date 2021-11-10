#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class musica{
	private:
		char nom[40][40]={"She wolf","Life letters","Labyrinth","Murders"};
		char autor[20][40]={"Shakira","Never get used to people","OOMPH!","Miracle musical"};
		char formato[20][40]={"Vinyl","Digital","Vinyl","Vinyl"};
		int n;
	public:
		musica();
		void getmostrar(int);
		void getagregar(char*,char*,char*);
		void getborrar(char*);	
};

musica::musica(){
}

void musica::getmostrar(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de canciones"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Posicion Vector "<<x+1<<endl;
		cout<<"Cancion: "<<nom[x]<<endl;
		cout<<"Autor: "<<autor[x]<<endl;
		cout<<"Formato: "<<formato[x]<<endl<<endl;
	}
	getch();
}

void musica::getagregar(char *_cancion,char*_autor,char*_formato){
	bool parar=false;
	int x;
	while(parar==false){
		if(strcmp(nom[x],"")==0){
			parar=true;
			strcpy(nom[x],_cancion);
			strcpy(autor[x],_autor);
			strcpy(formato[x],_formato);
		}
		x++;
	}
	getch();
}
/*
void musica::getborrar(char *_formato){
	int x=0,control=0,reti;
	for(x=0;x<n;x++){
		if(strcmp(_formato,formato[x])==0){
			cout<<"Posicion Vector "<<x+1<<endl;
			cout<<"Titula de la cuenta: "<<nom[x]<<endl;
			cout<<"autor: "<<autor[x]<<endl;
			cout<<"Nr. Cuenta: "<<formato[x]<<endl;
			cout<<"Saldo actual: "<<saldo[x]<<endl<<endl;
			cout<<"Digite el valor del Retiro: ";cin>>reti;
			saldo[x]=saldo[x]-reti;
			cout<<"Nuevo saldo: "<<saldo[x]<<endl<<endl;
			control++;
		}
	}
	if(control==0){
		cout<<"Nr. cuenta inexistente"<<endl;
	}
	getch();
}*/

int main(){
	char auxN[40],auxA[40],auxF[40];
	musica autor;
	autor.getmostrar(4);
	system("cls");
	cout<<"Agregar cancion"<<endl;
	cout<<"Cancion: ";cin>>auxN;cout<<endl;
	cout<<"Autor: ";cin>>auxA;cout<<endl;
	cout<<"Formato: ";cin>>auxF;cout<<endl;
	autor.getagregar(auxN,auxA,auxF);
	autor.getmostrar(5);
	/*system("cls");
	cout<<"Retiro Bancario"<<endl;
	cout<<"Digite el numero de la cuenta: ";cin>>aux2;cout<<endl;
	autor.getborrar(aux2);
	autor.getmostrar(4);*/
	getch();
	return 0;
}
