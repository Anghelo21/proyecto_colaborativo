#include <iostream>
using namespace std;

int main(){
	int b, h, P;
	cout<<">>>=====================================<<<: "<<endl;
	cout<<"   Calculadora - Perimetro del Recangulo"<<endl;
	cout<<">>>=====================================<<<: "<<endl<<endl;
	cout<<"perimetro = 2 * (base + altura)"<<endl<<endl;
	cout<<"A. Ingresa la base del rectangulo: "<<endl;
	cin>> b;
	while (b <= 0) {
        cout<<"¡Numero invalido!"<< endl;
        cout<<"Recuerda ingresar un numero positivo en la base." << endl;
		cin>> b;
    }
	cout<<"B. Ingresa la altura del rectangulo: "<<endl;
	cin>> h;
	while (h <= 0) {
        cout<<"¡Numero invalido!"<<endl;
		cout<<"Recuerda ingresar un numero positivo en la altura." << endl;
        cin>> h;
    }
	P= 2*(b+h);
	cout<<""<<endl;
	cout<<"El perimetro de tu rectangulo es: "<<endl<<P<<endl;

	cout<<""<<endl;
	cout<<"Listo, si te sirve de algo aqui esta tu rectangulo dibujado:"<<endl<<endl;

		for (int i = 0; i < h; i++) {
        for (int j = 0; j < b; j++) {
            cout << "+ ";
        }
        cout << endl;
}
	return 0;
}

