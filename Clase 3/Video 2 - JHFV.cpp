#include <iostream>
#include <stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class fecha{
	private:
		int dia, mes, year;
	public:
		fecha(int,int,int);
		fecha(long);
		void mostrarfecha();
};

fecha::fecha(int _dia,int _mes,int _year){
	year=_year;
	mes=_mes;
	dia=_dia;
}

fecha::fecha(long fecha){
	year=int(fecha/10000);
	mes=int((fecha-year*10000)/100);
	dia=int(fecha-year*10000-mes*100);
}

void fecha::mostrarfecha(){
	cout<<"la fecha es: "<<dia<<"/"<<mes<<"/"<<year<<endl;
}

int main(){
	fecha hoy(25,8,2021);
	fecha ayer(20210824);
	hoy.mostrarfecha();
	ayer.mostrarfecha();
	system("pause");
	return 0;
}
