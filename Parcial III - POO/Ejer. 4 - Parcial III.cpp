#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class estudiante{
	private:
		char id[40][40]={"1","2","3","4"};
		char nom[40][40]={"Harold","Jaider","Sebastian","Julieth"};
		char ape[40][40]={"Franco","Tovar","Calderon","Perdomo"};
		float n1[40]={5,4,4,3.6};
		float n2[40]={4,4,3.6,3.8};
		float n3[40]={4.5,4,4,3.9};
		int n;
	public:
		estudiante();
		void getmostrar(int);
		void geteditnota(char*);	
};

estudiante::estudiante(){
}

void estudiante::getmostrar(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de estudiantes"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Identificacion: "<<id[x]<<endl;
		cout<<"Nombre: "<<nom[x]<<endl;
		cout<<"Apellido: "<<ape[x]<<endl;
		cout<<"Nota 1: "<<n1[x]<<endl;
		cout<<"Nota 2: "<<n2[x]<<endl;
		cout<<"Nota 3: "<<n3[x]<<endl;
		cout<<"Nota Final: "<<(n1[x]+n2[x]+n3[x])/3<<endl<<endl;
	}
	getch();
}

void estudiante::geteditnota(char* _id){
	int x=0,c=0,e=0;
	system("cls");
	cout<<endl<<"Lista de estudiantes"<<endl<<endl;
	for(x=0;x<=n;x++){
		if(strcmp(_id,id[x])==0){
			cout<<"Identificacion: "<<id[x]<<endl;
			cout<<"Nombre: "<<nom[x]<<endl;
			cout<<"Apellido: "<<ape[x]<<endl;
			cout<<"Nota 1: "<<n1[x]<<endl;
			cout<<"Nota 2: "<<n2[x]<<endl;
			cout<<"Nota 3: "<<n3[x]<<endl<<endl;
			cout<<"¿Que nota va ha editar? ( 1 = Nota 1 - 2 = Nota 2 - 3 = Nota 3 )"<<endl;
			cin>>e;
			cout<<endl<<"Ingrese la nueva nota"<<endl;
			switch (e){
				case 1: cin>>n1[x]; break;
				case 2: cin>>n2[x]; break;
				case 3: cin>>n3[x]; break;
			}
			system("cls");
			cout<<"Nota Cambiada correctamente"<<endl;
			c++;
		}
	}
	if(c==0){
		cout<<"El estudiante no existe";
	}
	getch();
}

int main(){
	char aux[20];
	estudiante estud;
	estud.getmostrar(4);
	system("cls");
	cout<<"Editar la nota de un estudiante"<<endl<<"Ingrese el ID del estudiante ";cin>>aux;
	estud.geteditnota(aux);
	estud.getmostrar(4);
	getch;
	return 0;
}
