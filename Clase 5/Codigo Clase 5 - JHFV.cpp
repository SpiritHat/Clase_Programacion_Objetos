#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class semestre{
	private:
		int numdig;
		char numrom[4];
		char nomsem[15];
	public:
		semestre(int);
		semestre(char *);
		leersem();
};

semestre::semestre(int _numdig){
	numdig=_numdig;
	switch(numdig){
		case 1: strcpy(nomsem,"Primer"); break;
		case 2: strcpy(nomsem,"Segundo"); break;	
		case 3: strcpy(nomsem,"Tercer"); break;
		case 4: strcpy(nomsem,"Cuarto"); break;
		case 5: strcpy(nomsem,"Quinto"); break;
		case 6: strcpy(nomsem,"Sexto"); break;
		case 7: strcpy(nomsem,"Septimo"); break;
		case 8: strcpy(nomsem,"Octavo"); break;
		case 9: strcpy(nomsem,"Noveno"); break;
		case 10: strcpy(nomsem,"Decimo"); break;
	}
}

semestre::semestre(char * _numrom){
	strcpy(numrom,_numrom);
	if(strcmp(numrom,"I")==0){
		strcpy(nomsem,"Primer");
	}
	if(strcmp(numrom,"II")==0){
		strcpy(nomsem,"Segundo");
	}
	if(strcmp(numrom,"III")==0){
		strcpy(nomsem,"Tercer");
	}
	if(strcmp(numrom,"IV")==0){
		strcpy(nomsem,"Cuarto");
	}
	if(strcmp(numrom,"V")==0){
		strcpy(nomsem,"Quinto");
	}
	if(strcmp(numrom,"VI")==0){
		strcpy(nomsem,"Sexto");
	}
	if(strcmp(numrom,"VII")==0){
		strcpy(nomsem,"Septimo");
	}
	if(strcmp(numrom,"VIII")==0){
		strcpy(nomsem,"Octavo");
	}
	if(strcmp(numrom,"IX")==0){
		strcpy(nomsem,"Noveno");
	}
	if(strcmp(numrom,"X")==0){
		strcpy(nomsem,"Decimo");
	}
}

semestre::leersem(){
	cout<<nomsem<<" Semestre"<<endl;
}

int main(){
	semestre obj(5);
	obj.leersem();
	semestre obj1("X");
	obj1.leersem();
	cout<<endl;
	system("Pause");
	return 0;
}
