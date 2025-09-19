#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Cuantos conductores son: ";
    cin >> n;

    vector<double> distancias(n);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la distancia del conductor " << i+1 << ": ";
        cin >> distancias[i];
    }

    double total = 0;
    for (double d : distancias) {
        total += d;
    }

    double promedio = total / n;
    double maxDistancia = distancias[0];
    int conductorMax = 0; 

    for (int i = 0; i < n; i++) {
        if (distancias[i] > maxDistancia) {
            maxDistancia = distancias[i];
            conductorMax = i; 
        }
    }

    
    cout << "distancia total: " << total  << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Conductor con mayor distancia:" << conductorMax + 1 << " con " << maxDistancia << " km" << endl;

    return 0;
}
