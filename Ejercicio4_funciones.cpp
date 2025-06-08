#include<iostream>
using namespace std;
int Mayor(int a, int b, int c){
	int M;
	if(a<b){
		if(b<c){
			M=c;
		}else{
			M=b;
		}
	}else if(a<c){
		M=c;
	}else{
		M=a;
	}
	return M;
}
int main(){
	int n1,n2,n3,Ma;
	cout<<Ingrese tres numeros<<endl;
	cin>> n1 >> n2 >> n3;
	Ma=Mayor(n1,n2,n3);
	cout<<El numero mayor es: <<Ma<<endl;
	return 0;
}
