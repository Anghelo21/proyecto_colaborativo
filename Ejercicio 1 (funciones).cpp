#include <iostream>
using namespace std;

double suma(int a, int b, int c){
	double prom;
	prom= a*0.40+b*0.35+c*0.25;
	return prom;
}

int main(){
	int ec, ed, ep;
	double S;
	cout << "-------------------------------------------------------"<< endl;
	cout << "    Calificacion Final - Fundamentos y Programacion    "<< endl;
	cout << "-------------------------------------------------------"<< endl<<endl;
	cout<<"Ingresa tus notas de la Primera Unidad:"<<endl;
	cout<<"---------------------------------------"<<endl<<endl;

	cout<<"Nota de conocimiento(0-20): "<<endl;
	
	cin>>ec;
	if (ec < 0 or ec > 20) {
            cout << "Esta nota es invalida, recuerda que debe de estar dentro del rango de 0 y 20." << endl;
            cin>>ec;
        }
	cout<<"Nota de desempeño: "<<endl;
	cin>>ed;	
		if (ed < 0 or ed > 20) {
            cout << "Esta nota es invalida, recuerda que debe de estar dentro del rango de 0 y 20." << endl;
            cin>>ec;
        }
	cout<<"Nota de producto: "<<endl;
	cin>>ep;
		if (ep < 0 or ep > 20) {
            cout << "Esta nota es invalida, recuerda que debe de estar dentro del rango de 0 y 20." << endl;
            cin>>ec;
        }
	S=suma(ec, ed, ep);
	cout<<"Tu calificacion final en la Primera Unidad es: "<<endl<<S;
	return 0;
}
