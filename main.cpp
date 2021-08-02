#include <iostream>
#include<time.h>
#include <stdlib.h>

using namespace std;

// maximo elemento
void max() {
    int a;
    cout << endl << "Ingrese la cantidad de numeros que va a querer ingresar para ver el maximo" << endl;
    cin >> a;
    int b[a];
    for (int c = 0; c < a; c++) {
        cout << "Ingrese el valor #" << c + 1 << "  "<<endl;
        cin >> b[c];
    }
    int d = b[0];
    for (int e = 1; e < a; e++) {
        if (d < b[e]) {
            d = b[e];
        }
    }
    cout << endl << "El mayor es: " << d << endl;
}

// minimo elemento
void min() {
    int a;
    cout << endl << "Ingrese la cantidad de numeros que va a querer ingresar para ver el minimo" << endl;
    cin >> a;
    int b[a];
    for (int c = 0; c < a; c++) {
        cout << "Ingrese el valor #" << c + 1 << "  "<<endl;
        cin >> b[c];
    }
    int d = b[0];
    for (int e = 1; e < a; e++) {
        if (d > b[e]) {
            d = b[e];
        }
    }
    cout << endl << "El menor es: " << d << endl;
}

//aleatorios
void aleatorio() {
    int cv, acum;
    cout << "Ingrese la cantidad de valores aleatorios que desea generar" << endl;
    cin >> cv;
    int vector[cv];
    srand(time(0));
    for (int x = 0; x < cv; x++) {
        vector[x] = rand();
        cout << endl << vector[x] << endl;
    }
}

int main() {
    max();
    min();
    aleatorio();
}