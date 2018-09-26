#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirNumeros();
void mostrarN();
int nd, *n, *puntero;
int main()
{	
	pedirNumeros();
	mostrarN();
	delete[] n;
	
	getch();
	return 0;
}

void pedirNumeros()
{
	cout<<"ingrese la cantidad de numeros "; cin>>nd;
	n=new int[nd];
	
	for(int i=0; i<nd; i++){
		cout<<"dame el numero "; cin>>n[i];
	}
}
void mostrarN()
{
	punterr=n;
	cout<<"\n ESTOS SON LOS NUMEROS."<<endl;
	for(int i=0 ; i<nd; i++)
	{
		cout<<*puntero++<<endl;
	}
}
