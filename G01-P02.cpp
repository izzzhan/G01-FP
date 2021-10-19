//
//  Guión 1 - Tema 2
//  2. Diseñe un programa que lea por teclado un número entero y muestre por pantalla ese número incrementado en 5.
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main() {
    
    int numero;
    
    // Pedimos la usuario el valor de la variable
    cout << "Digite un numero enetero: ";
    cin >> numero;
    
    // Mostramos el valor incrementado en 5
    cout << "\nEl numero introducido incrementado en 5 es: " << numero + 5 << endl;
    

    return 0;
}
