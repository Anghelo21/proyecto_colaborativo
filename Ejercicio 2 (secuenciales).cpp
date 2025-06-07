#include <iostream>
using namespace std;

int main(){
	double s, d, C;
	cout << "*****************************" << endl;
	cout << "*    CONVERSOR DE MONEDAS   *" << endl;
	cout << "*     (SOLES -> DOLARES)    *" << endl;
	cout << "*****************************" << endl<<endl;
	cout << "Cantidad              Convertido a"<<endl;
	cout << "1 sol peruano    =    0.27 dolares"<<endl<<endl;
	do{
		cout<<"Ingresa tu cantidad de soles:"<<endl<<"S/.";
		cin>> s;
		if (s <= 0) {
		cout <<""<<endl<<"¡CANTIDAD INVALIDA!"<<endl<<"Recuerda ingresar una cantidad positiva por favor."<<endl<<endl;
		}
	}while(s <= 0);
	C= s*0.27;
	cout<<""<<endl<<"¡Listo!"<<endl<<"Su cambio equivalente a dolares es:"<<endl<<"$"<< C <<endl;
	return 0;
}
