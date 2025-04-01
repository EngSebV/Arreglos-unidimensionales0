#include <iostream>
using namespace std;

int main() {
    int nvert;  
    cout << "Ingresa el número de vértices: ";
    cin >> nvert;
    
    float x[100], y[100], z[100];
    
    for (int i = 0; i < nvert; i++) {
        cout << "Coordenada x del vértice " << i + 1 << ": ";
        cin >> x[i];
        cout << "Coordenada y del vértice " << i + 1 << ": ";
        cin >> y[i];
        cout << "Coordenada z del vértice " << i + 1 << ": ";
        cin >> z[i];
    }
    
    int ncaras;
    cout << "Ingresa el número de caras: ";
    cin >> ncaras;

    int nvert_per_cara[100];  
    int caras[100][100];     

    for (int i = 0; i < ncaras; i++) {
        cout << "¿Cuántos vértices tiene la cara " << i + 1 << "? ";
        cin >> nvert_per_cara[i];  
        cout << "Ingresa los índices de los " << nvert_per_cara[i] << " vértices de la cara " << i + 1 << " (entre 1 y " << nvert << "):" << endl;
        for (int j = 0; j < nvert_per_cara[i]; j++) {
            cin >> caras[i][j];
        }
    }

    cout << "\nEstructura total:\n" << endl;

    cout << "* Vértices:" << endl;
    for (int i = 0; i < nvert; i++) {
        cout << "v " << x[i] << " " << y[i] << " " << z[i] << endl;
    }

    cout << "* Caras:" << endl;
    for (int i = 0; i < ncaras; i++) {
        cout << "f";
        for (int j = 0; j < nvert_per_cara[i]; j++) {
            cout << " " << caras[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
