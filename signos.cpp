
#include <iostream>
#include <string>
using namespace std;

string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    }
    return "Taquicardia";
}

int main() {
    int frecuencia;

    cout << "Frecuencia cardiaca (lpm): ";
    cin >> frecuencia;

    cout << "Clasificacion: "
         << clasificarFrecuencia(frecuencia) << endl;

    return 0;
}
