#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "ingrese la cantidad de productos: ";
    cin >> n;
    float descuento = 0;
    vector<int> arreglo(n);  
    double subtotal = 0;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el precio del producto " << i+1 << ": ";
        cin >> arreglo[i];
        subtotal += arreglo[i];
    }

    double impuesto = subtotal * 0.08;
    double total = subtotal + impuesto;
    if (subtotal + impuesto > 100) { 
    descuento = (subtotal + impuesto) * 0.10; 
}

double total = subtotal + impuesto - descuento;

    cout << "el subtotal : " << subtotal << endl;
    cout << "la cantidad de descuento sera : " << descuento << endl;
    cout << "el total sera: " << total << endl;

    return 0;  
}
