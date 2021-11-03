#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class fecha{
	private:
		int dia;
		int mes;
		int year;
	public:
		fecha();
		void setfecha(int,int,int);
		int getdia();
		int getmes();
		int getyear();
		void mostrar();
		void fechacorrecta();
		void fechadiasiguiente();	
};

fecha::fecha(){
}

void fecha::setfecha(int _dia,int _mes,int _year){
	dia=_dia;
	mes=_mes;
	year=_year;
}

int fecha::getdia(){
	return dia;
}

int fecha::getmes(){
	return mes;
}

int fecha::getyear(){
	return year;
}

void fecha::mostrar(){
	cout<<"Fecha: "<<dia<<"/"<<mes<<"/"<<year<<endl<<endl;
}

void fecha::fechacorrecta(){
	if (mes>=1&&mes<=12){
        switch (mes){
            case  1:
            case  3:
            case  5:
            case  7:
            case  8:
            case 10:
            case 12: if (dia>=1&&dia<=31){
            	cout<<"Fecha correcta"<<endl;
			}else{
				cout<<"Fecha incorrecta"<<endl;
			}break;
            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( dia >= 1 && dia <= 30 ){
            	cout<<"Fecha correcta"<<endl;
			}else{
				cout<<"Fecha incorrecta"<<endl;
			}break;
            case  2 : if(year%4==0 && year%100!=0 || year%400==0){
            			if(dia>=1&&dia<=29){
            				cout<<"Fecha correcta"<<endl;
						}else{
							cout<<"Fecha incorrecta"<<endl;
						}
				}else{
					if(dia>=1&&dia<=28){
            			cout<<"Fecha correcta"<<endl;
					}else{
						cout<<"Fecha incorrecta"<<endl;
					}
				}break;
        }
    }else{
		cout<<"Fecha incorrecta"<<endl;
	}
}

void fecha::fechadiasiguiente(){
	switch(mes){
		case 1:
		case 5:
		case 7:
		case 8:
		case 10: if(dia==31){
			dia=1;
			mes++;
		}else{
			dia++;
		}break;
		case 4:
		case 6:
		case 9:
		case 11: if(dia==30){
			dia=1;
			mes++;
		}else{
			dia++;
		}break;
		case 12: if(dia==31){
			dia=1;
			mes=1;
			year++;
		}else{
			dia++;
		}break;
		case 2: if(year%4==0 && year%100!=0 || year%400==0){
            			if(dia==29){
            				dia=1;
            				mes++;
						}else{
							dia++;
						}
				}else{
					if(dia==28){
            			dia=1;
            			mes++;
					}else{
						dia++;
					}
				}break;
	}
	cout<<endl;
	cout<<"Fecha dia siguiente"<<endl;
	mostrar();
}

int main(){
	fecha f1;
	f1.setfecha(28,2,2021);
	f1.mostrar();
	f1.fechacorrecta();
	f1.fechadiasiguiente();
	getch();
	return 0;
}
