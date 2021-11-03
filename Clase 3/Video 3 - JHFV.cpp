#include <iostream>
#include <stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class tiempo{
	private:
		int horas,min,seg;
	public:
		tiempo(int,int,int);
		tiempo(int);
		void mostrartiempo();	
};

tiempo::tiempo(int _horas,int _min,int _seg){
	horas=_horas;
	min=_min;
	seg=_seg;
}

tiempo::tiempo(int tiemposeg){
	horas=tiemposeg/3600;
	tiemposeg%=3600;
	min=tiemposeg/60;
	seg=tiemposeg%60;
}

void tiempo::mostrartiempo(){
	cout<<"La hora es: "<<horas<<":"<<min<<":"<<seg<<endl;
}

int main(){
	tiempo actual(8,42,46);
	tiempo anterior(25000);
	actual.mostrartiempo();
	anterior.mostrartiempo();
	system("pause");
	return 0;
}
