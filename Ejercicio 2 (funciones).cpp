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
	cout<<"Ingrese un numero del 1 al 5: "<<endl;
	cin>>v;
	voc=num(v);
	if (voc!='X'){
	    cout<<"La vocal que representa es: "<<voc<<endl;
    } else{
    	cout<<"Entre 1 y 5 por favor"<<endl;
	}
}
