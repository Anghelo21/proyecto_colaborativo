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
	cout<<"Ingrese sus notas porfavor"<<endl;
	cout<<"Nota de conocimiento: ";
	cin>>ec;
	cout<<"Nota de desempeño: ";
	cin>>ed;
	cout<<"Nota de producto: ";
	cin>>ep;
	S=suma(ec, ed, ep);
	cout<<"Su calificacion final es: "<<S<<endl;
	return 0;
}
