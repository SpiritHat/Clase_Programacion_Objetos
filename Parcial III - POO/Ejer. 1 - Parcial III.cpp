#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class musica{
	private:
		char nom[40][40]={"She_wolf","Life_letters","Labyrinth","Murders"};
		char autor[20][40]={"Shakira","Never_get_used_to_people","OOMPH!","Miracle_musical"};
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
}

void musica::getborrar(char *_nom){
	int x=0,control=0,c=0;
	for(x=0;x<n;x++){
		if(strcmp(_nom,nom[x])==0){
			cout<<"Posicion Vector "<<x+1<<endl;
			cout<<"Cancion: "<<nom[x]<<endl;
			cout<<"Autor: "<<autor[x]<<endl;
			cout<<"Formato: "<<formato[x]<<endl<<endl;
			cout<<"Es ta la cancion que quiere borrar? (1 = si | 2 = no)"<<endl;
			cin>>c;
			if(c==1){
			strcpy(nom[x],"N/A");
			strcpy(autor[x],"N/A");
			strcpy(formato[x],"N/A");
			}
			control++;
		}		
	}
	if(control==0){
		cout<<"Cancion inexistente"<<endl;
	}
}

int main(){
	char auxN[40],auxA[40],auxF[40],aux2[40];
	musica autor;
	autor.getmostrar(4);
	system("cls");
	cout<<"Agregar cancion"<<endl;
	cout<<"Cancion: ";cin>>auxN;
	cout<<"Autor: ";cin>>auxA;
	cout<<"Formato: ";cin>>auxF;
	autor.getagregar(auxN,auxA,auxF);
	autor.getmostrar(5);
	system("cls");
	cout<<"Borrar cancion"<<endl;
	cout<<"Digite el nombre de la cancion a borrar: ";cin>>aux2;cout<<endl;
	autor.getborrar(aux2);
	autor.getmostrar(5);
	getch();
	return 0;
}
