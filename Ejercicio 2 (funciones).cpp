#include <iostream>
using namespace std;


char num(char a){
	switch(a){
		case '1':
			a='A';
			break;
		case '2':
			a='E';
			break;
		case '3':
			a='I';
			break;
		case '4':
			a='O';
			break;
		case '5':
			a='U';
			break;
		default:
			a='X';
			break;
	}
	return a;
}

int main(){
	char v;
	char voc;
	cout<<"   -------------------------------"<<endl;
	cout<<"<<<        VOCAL X NUMERO       >>>"<<endl;
	cout<<"   -------------------------------"<<endl<<endl;
	cout<<"a) Vocales={A,E,I,O,U}"<<endl<<"b) Numeros={1,2,3,4,5}"<<endl<<endl;
	cout<<"¡DESCUBRE EL CODIGO NUMERICO DE UNA VOCAL!"<<endl<<endl;
	cout<<"Empecemos escribiendo un numero del 1 al 5:"<<endl;
	do{
		cin>>v;	
		voc=num(v);
	
		if (voc=='X'){
	    	cout<<"¡Numero invalido!"<<endl<<"Recuerda que debes escribir un numero entre 1 y 5 por favor."<<endl;
		}
	}while(voc=='X');
	cout<<"¡Excelente!"<<endl<<"El numero "<<v<<" representa a la vocal "<<voc<<"."<<endl;
}
