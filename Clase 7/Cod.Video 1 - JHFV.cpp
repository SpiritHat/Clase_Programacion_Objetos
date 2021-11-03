#include<iostream>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class punto{
	private:
		int x,y;
	public:
		puntos();
		void setpunto(int,int);
		int getX();
		int getY();	
};


void punto::setpunto(int _x, int _y){
	x=_x;
	y=_y;
}

int punto::getX(){
	return x;
}

int punto::getY(){
	return y;
}

int main(){
	punto punto1;
	punto1.setpunto(15,10 );
	cout<<punto1.getX()<<endl;
	cout<<punto1.getY()<<endl;
	system("pause");
	return 0;
}
