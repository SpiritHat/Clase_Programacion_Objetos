#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class cuentas{
	private:
		char nom[40][40]={"Ardila Lulle","Luis Carlos Sarmiento","Alejandro Santo Domingo","Alvaro Uribe"};
		char banco[20][40]={"Avilas","Popular","Bogota","Occidente"};
		char cod[20][40]={"112233","154657441","12145414","00127490"};
		int saldo[40]={255000,1022000,2002000,1000002000};
		int n;
	public:
		cuentas();
		void getmostrar(int);
		void getdeposito(char*);
		void getretiro(char*);	
};

cuentas::cuentas(){
}

void cuentas::getmostrar(int _n){
	int x=0;
	n=_n-1;
	system("cls");
	cout<<"Lista de cuentas bancarias"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<"Posicion Vector "<<x+1<<endl;
		cout<<"Titula de la cuenta: "<<nom[x]<<endl;
		cout<<"Banco: "<<banco[x]<<endl;
		cout<<"Nr. Cuenta: "<<cod[x]<<endl;
		cout<<"Saldo: "<<saldo[x]<<endl<<endl;
	}
	getch();
}

void cuentas::getdeposito(char *_cod){
	int x=0,control=0,dep;
	for(x=0;x<=n;x++){
		if(strcmp(_cod,cod[x])==0){
			cout<<"Posicion Vector "<<x+1<<endl;
		cout<<"Titula de la cuenta: "<<nom[x]<<endl;
		cout<<"Banco: "<<banco[x]<<endl;
		cout<<"Nr. Cuenta: "<<cod[x]<<endl;
		cout<<"Saldo actual: "<<saldo[x]<<endl<<endl;
		cout<<"Digite el valor del deposito: ";cin>>dep;
		saldo[x]=saldo[x]+dep;
		cout<<"Nuevo saldo: "<<saldo[x]<<endl<<endl;
		control++;
		}
	}
	if(control==0){
		cout<<"Nr. cuenta inexistente"<<endl;
	}
	getch();
}

void cuentas::getretiro(char *_cod){
	int x=0,control=0,reti;
	for(x=0;x<n;x++){
		if(strcmp(_cod,cod[x])==0){
			cout<<"Posicion Vector "<<x+1<<endl;
			cout<<"Titula de la cuenta: "<<nom[x]<<endl;
			cout<<"Banco: "<<banco[x]<<endl;
			cout<<"Nr. Cuenta: "<<cod[x]<<endl;
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
}

int main(){
	char aux1[20],aux2[20];
	cuentas banco;
	banco.getmostrar(4);
	system("cls");
	cout<<"Deposito Bancario"<<endl;
	cout<<"Digite el numero de la cuenta: ";cin>>aux1;cout<<endl;
	banco.getdeposito(aux1);
	banco.getmostrar(4);
	system("cls");
	cout<<"Retiro Bancario"<<endl;
	cout<<"Digite el numero de la cuenta: ";cin>>aux2;cout<<endl;
	banco.getretiro(aux2);
	banco.getmostrar(4);
	getch();
	return 0;
}
