#include<iostream>
using namespace std;
int main() {
	float Di, M, Dg=0;
	cout<<Ponga la cantidad de dinero que quiere invertir<<endl;
	cin>>Di;
	cout<<Digite la cantidad de meses de la inversion<<endl;
	cin>>M;
	Dg = (Di*0.02)*M;
	cout<<La cantidad de dinero que gano es: <<Dg<<endl;
	return 0;	 
}
