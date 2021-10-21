//
//  Guión 1 - Tema 2
//  12. Diseñe un programa que lea una temperatura medida en la escala Celsius (grados centígrados) y la
//  convierta a grados Fahrenheit, según la siguiente fórmula:
//          Fahrenheit = (Celsius * 9 / 5)+ 32;
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main(){
    float celsius;      // Grados Celsius
    float fahren;       // Grados Fahrenheit
    
    cout << "Digite una temperatura en grados Celsius: ";
    cin >> celsius;
    
    // Conversión Celsius->Fahrenheit
    fahren = (celsius * 9 / 5)+ 32;
    
    cout << "\nEn grados Fahrenheit: " << fahren << " ºF" << endl << endl;
    
    return 0;
}
