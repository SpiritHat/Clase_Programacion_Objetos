#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class  soat{
	private:
		int tarifa[30]={100,110,120,130,140,140,140};
		char vehiculo[50][50]={"Ciclomotor    ","Menos de 100cc","De 100 a 200cc","Mas de 200cc  ","Motocarro     ","Tricimoto     ","Cuadriciclos  "};
		int prima[30]={117800,245300,329400,371500,371500,371500,371500};
		int cont[30]={58900,122650,164700,185750,185750,185750,185750};
		int n;
		/*char nombre[40];
		char mod[50];
		int cilin;*/
	public:
		soat();
		void getmostrar(int);
		void getdatos(string,string,int);	
};

soat::soat(){
}

void soat::getmostrar(int _n){
	int x=0,runt=4000;
	n=_n-1;
	system("cls");
	cout<<endl<<"Tabla del cilindraje y valor del soat"<<endl<<endl<<"Valor RUNT 2021 = "<<runt<<endl<<endl;
	cout<<"ID    "<<"Tarifa     "<<"Clase del vehiculo         "<<"Prima            "<<"Contribucion       "<<"Total + Tasa RUNT"<<endl<<endl;
	for(x=0;x<=n;x++){
		cout<<x+1<<"      "<<tarifa[x]<<"        "<<vehiculo[x]<<"             "<<prima[x]<<" COP       "<<cont[x]<<" COP         "<<prima[x]+cont[x]+runt<<" COP"<<endl;
	}
	getch();
}

void soat::getdatos(string nombre,string mod, int cilin){
	system("cls");
	int runt=4000;
	cout<<"Recibo de pago"<<endl<<endl;
	cout<<"Nombre titulante: "<<nombre<<endl<<"Modelo del vehiculo: "<<mod<<endl;
	switch(cilin){
		case 1: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
		case 2: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
		case 3: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
		case 4: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
		case 5: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
		case 6: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
		case 7: cout<<"Cilindraje: "<<vehiculo[cilin-1]<<endl<<"Total a pagar: "<<prima[cilin-1]+cont[cilin-1]+runt<<" COP"<<endl; break;
	}
	getch;
}

int main(){
	string aux,aux2;
	int aux3;
	soat st;
	st.getmostrar(7);
	cout<<endl<<endl<<"Generar valor de Soat"<<endl;
	cout<<endl<<"Nombre titulante: ";cin>>aux;
	cout<<endl<<"Modelo: ";cin>>aux2;
	cout<<endl<<"ID del cilindraje (clase de vehiculo): ";cin>>aux3;
	st.getdatos(aux,aux2,aux3);
	getch();
	return 0;
}
