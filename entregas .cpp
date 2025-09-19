#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "cuantas entregas son: ";
    cin >> n;

    vector<double> distancias(n);
    for (int i = 0; i < n; i++) {
        cout << "ingrese la distancia :" << i+1 ;
        cin >> distancias[i];
    }

    double total = 0;
    for (double d : distancias) {
        total += d;
    }

    double promedio = total / n;

    cout << "Distancia : " << total  << endl;
    cout << "Promedio : " << promedio << endl;

    return 0;
}
