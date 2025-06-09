#include <iostream>
using namespace std;

int Mayor(int a, int b, int c) {
    return max(a, max(b, c));
}

int main() {
    int n1, n2, n3;
    cout << "Ingrese tres numeros: " << endl;
    cin >> n1 >> n2 >> n3;

    int Ma = Mayor(n1, n2, n3);
    cout << "El numero mayor es: " << Ma << endl;

    return 0;
} 
