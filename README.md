# signos-vitales

#include <iostream>
#include <string>
using namespace std;

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    double fahrenheit;

    cout << "Temperatura en Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Temperatura en Celsius: "
         << fahrenheitACelsius(fahrenheit) << endl;

    return 0;
}
