#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class alumno {
	private:
		char nom[40][40]={"andres","juan","carolina","ximena"};
		char cc[40][40]={"1102","5423","7416","1354"};
		float nf[40]={3.4,2.4,5,1.2};
		int n;
	public:
		alumno();
		void getmostrar(int);
		void geteditar(char*);	
};

alumno::alumno(){
}

void alumno::getmostrar(int _n){
	int x=0,ca=0,cb=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de Alumnos aprobados"<<endl<<endl;
	for(x=0;x<=n;x++){
		if(nf[x]>=3){
			cout<<"Nombre: "<<nom[x]<<endl;
			cout<<"CC: "<<cc[x]<<endl;
			cout<<"Nota Final: "<<nf[x]<<endl<<endl;
			ca++;
		}
	}
	if(ca==0){
		cout<<"No hay alumnos aprobados";
	}
	cout<<endl<<"Lista de Alumno desaprobados"<<endl<<endl;
	for(x=0;x<=n;x++){
		if(nf[x]<3){
			cout<<"Nombre: "<<nom[x]<<endl;
			cout<<"CC: "<<cc[x]<<endl;
			cout<<"Nota Final: "<<nf[x]<<endl<<endl;
			cb++;
		}
	}
	if(cb==0){
		cout<<"No hay alumnos desaprobados";
	}
	getch();
}

void alumno::geteditar(char* _nom){
	int x=0,o=0,c=0;
	system("cls");
	for(x=0;x<=n;x++){
		if(strcmp(_nom,nom[x])==0){
			cout<<"Nombre: "<<nom[x]<<endl;
			cout<<"CC: "<<cc[x]<<endl;
			cout<<"Nota Final: "<<nf[x]<<endl<<endl;
			cout<<"Que dato quiere modificar? (1 = nombre - 2 = CC - 3 = Nota final)"<<endl;
			cin>>o;
			cout<<"Ingrese el nuevo dato"<<endl;
			switch(o){
				case 1: cin>>nom[x]; break;
				case 2: cin>>cc[x]; break;
				case 3: cin>>nf[x]; break;
			}
			c++;
		}
	}
	if(c==0){
		cout<<"Alumno no Existente";
	}
	getch();
}

int main(){
	char aux[40];
	alumno al;
	al.getmostrar(4);
	system("cls");
	cout<<"Modificar un alumno"<<endl<<"Ingrese el nombre del Alumno: ";cin>>aux;
	al.geteditar(aux);
	al.getmostrar(4);
	getch();
	return 0;
}
