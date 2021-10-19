//
//  Guión 1 - Tema 2
//  5. Diseñe un programa en C++ tal que pida un número entero por teclado que sea una cantidad de bytes y muestre por
//  pantalla cuantos Kbytes son.
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main() {
    
    int bytes;
    double kbytes;
    
    // Pedimos el numero de bytes al usuario
    cout << "Introduzca el numero de Bytes: ";
    cin >> bytes;
    
    // Convertimos a Kbytes
    kbytes = (double) bytes/1024;
    
    // Mostramos los datos al usuario
    cout << "\n En Kbytes son: " << kbytes << " Kb" << endl;
    
    

    return 0;
}
