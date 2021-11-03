#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

//Jhon Harold Franco Valencia

using namespace std;

class Arrays{
private:
float n1[100],n2[100],n3[100],nf[100];
char Ced[15][100];
char Nombre[15][100];
char Apell1[15][100];
char Apell2[15][100];
int pos;
public:
Arrays(int);
void sig();
void ant();
void crear_uno();
void ver_uno();
};

Arrays::Arrays(int _pos){ 
pos=_pos;
}

void Arrays::sig(){
pos++;
}
void Arrays::ant(){
pos--;
}
void Arrays::crear_uno(){
system("cls");
cout<<"cedula : ";cin>>Ced[pos];
cout<<"Nombre : ";cin>>Nombre[pos];
cout<<"primer apellido : ";cin>>Apell1[pos];
cout<<"segundo apellido : ";cin>>Apell2[pos];
cout<<"nota 1 : ";cin>>n1[pos];
cout<<"nota 2 : ";cin>>n2[pos];
cout<<"nota 3 : ";cin>>n3[pos];
getch();
}

void Arrays::ver_uno(){
system("cls");
cout<<"cedula : "<<Ced[pos]<<endl;
cout<<"Nombre : "<<Nombre[pos]<<endl;
cout<<"primer apellido : "<<Apell1[pos]<<endl;
cout<<"segundo apellido : "<<Apell2[pos]<<endl;
cout<<"nota 1 : "<<n1[pos]<<endl;
cout<<"nota 2 : "<<n2[pos]<<endl;
cout<<"nota 3 : "<<n3[pos]<<endl;
nf[pos]=(n1[pos]+n2[pos]+n3[pos])/3;
cout<<"la nota final es : "<<nf[pos]<<endl;
getch();
}

int main(){
Arrays Informatica(0);
Informatica.crear_uno();
Informatica.ver_uno();
Informatica.sig();
Informatica.crear_uno();
Informatica.sig();
Informatica.crear_uno();
Informatica.ver_uno();
Informatica.ant();
Informatica.ver_uno();
getch();
return 0;
}
