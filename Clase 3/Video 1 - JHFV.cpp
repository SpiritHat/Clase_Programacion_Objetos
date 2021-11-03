#include <iostream>
#include <stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class persona{
	private:
		int edad;
		string nombre;
	public:
		persona(int,string);
		void leer();
		void correr();	
};

persona::persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

void persona::leer(){
	cout<<"soy "<<nombre<<" y estoy leyendo"<<endl;
}

void persona::correr(){
	cout<<"soy "<<nombre<<" y estoy corriendo y tengo "<<edad<<" años"<<endl;
}

int main(){
	persona p1=persona(20,"alejandro");
	persona p2(19,"maria");
	persona p3(21,"juan");
	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();
	system("pause");
	return 0;
}
