#include <iostream>
using namespace std;
int main() {
    float inversion, meses, ganancia;
    cout << "Ponga la cantidad de dinero que quiere invertir: ";
    cin >> inversion;
    cout << "Digite la cantidad de meses de la inversion: ";
    cin >> meses;
    ganancia = inversion * 0.02 * meses;
    cout << "La cantidad de dinero que gano es: " << ganancia << endl;
    return 0;
}
