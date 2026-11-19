
#include <iostream>
#include <string>
using namespace std;

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    }
    return "Taquicardia";
}

int main() {
    double fahrenheit;
    int frecuencia;

    cout << "Temperatura en Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Temperatura en Celsius: "
         << fahrenheitACelsius(fahrenheit) << endl;

    cout << "Frecuencia cardiaca (lpm): ";
    cin >> frecuencia;

    cout << "Clasificacion: "
         << clasificarFrecuencia(frecuencia) << endl;

    return 0;
}
