#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ifstream archivo("C:/Users/natal/OneDrive/Escritorio/tarea");
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    vector<double> numeros;
    double numero;
    while (archivo >> numero) {
        numeros.push_back(numero);
    }
    archivo.close();

    int conteo = numeros.size();
    if (conteo == 0) {
        cout << "Archivo no válido." << endl;
        return 1;
    }

    double suma = 0.0;
    for (double valor : numeros) {
        suma += valor;
    }
    double media = suma / conteo;

    cout << "**Tarea 2*** " << endl;
    cout << "Cantidad de datos encontrados: " << conteo << endl;
    cout << "Media: " << media << endl;

    return 0;
}
