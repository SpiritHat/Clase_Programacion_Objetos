#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class loteria{
	private:
		char nom[40][40]={"Sebastian","Harold","Jaider","Julieth"};
		char cc[40][40]={"102250","1002406","441411","1002406"};
		char lotejugar[40][40]={"Chonto dia","Chonto noche","Dorado mañana","Dorado tarde"};
		int dia[40]={15,10,12,16};
		int numero[40]={632,245,100,1021};
		int valor[40]={5000,650,1400,10000};
		int n;
	public:
		loteria();
		void getmostrar(int);
		void getvendido(int);
		void getdinero(int);
		void getganador(int);	
};

loteria::loteria(){
}

void loteria::getmostrar(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de loterias compradas"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Nombre: "<<nom[x]<<endl;
		cout<<"CC: "<<cc[x]<<endl;
		cout<<"Loteria: "<<lotejugar[x]<<endl;
		cout<<"Dia: "<<dia[x]<<endl;
		cout<<"Numero: "<<numero[x]<<endl;
		cout<<"Valor: "<<valor[x]<<" COP"<<endl<<endl;
	}
	getch();
}

void loteria::getvendido(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Lista de numeros vendidos"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Numero: "<<numero[x]<<"     "<<"Comprador: "<<nom[x]<<" - "<<cc[x]<<"     "<<"Valor: "<<valor[x]<<" COP"<<endl;
	}
	getch();
}

void loteria::getdinero(int _n){
	int x=0,total=0;
	n=_n-1;
	system("cls");
	cout<<endl<<"Dinero recaudado"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Loteria: "<<lotejugar[x]<<"     "<<"Valor: "<<valor[x]<<" COP"<<endl;
		total=total+valor[x];
	}
	cout<<endl<<"Total dinero recudado: "<<total<<" COP"<<endl;
	getch();
}

void loteria::getganador(int _n){
	int x=0,gan=0,c=0;
	n=_n-1;
	system("cls");
	cout<<"Digite el numero ganador: ";cin>>gan;
	for(x=0;x<=n;x++){
		if(gan==numero[x]){
			cout<<endl<<"Ganador de la loteria"<<endl<<endl;
			cout<<"Nombre: "<<nom[x]<<endl;
			cout<<"CC: "<<cc[x]<<endl;
			cout<<"Loteria: "<<lotejugar[x]<<endl;
			cout<<"Dia: "<<dia[x]<<endl;
			cout<<"Numero: "<<numero[x]<<endl;
			cout<<"Valor: "<<valor[x]<<" COP"<<endl<<endl;
			cout<<"Dinero Ganado: "<<valor[x]+(valor[x]*50)<<" COP"<<endl;
			c++;
		}
	}
	if(c==0){
		cout<<endl<<"No hay ganadores"<<endl;
	}
	getch();
}

int main(){
	loteria lote;
	lote.getmostrar(4);
	lote.getvendido(4);
	lote.getdinero(4);
	lote.getganador(4);
	getch();
	return 0;
}
