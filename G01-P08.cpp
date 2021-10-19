//
//  Guión 1 - Tema 2
//  8. Diseñe un programa que pida dos números enteros por teclado y a continuación calcule su suma, su diferencia, 
//  su producto y su cociente y los muestre por pantalla.
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main(){
  int num1, num2;
  int suma = 0;
  int resta = 0;
  int mult = 1;
  float divis = 1;
  
  cout << "Digite el primer numero: "; cin >> num1;
  cout << "\nDigite el segundo numero: "; cin >> num2;
  
  // Suma
  suma = num1 + num2;
  cout << "\nSu suma es: " << suma << endl;
  
  // Diferencia
  resta = num1 - num2;
  cout << "Su diferencia es: " << resta << endl;
  
  // Producto
  mult = num1 * num2;
  cout << "Su producto es: " << mult << endl;
  
  // Cociente
  divis = num1 / num2;
  cout << "Su cociente es: " << divis << endl;
  
  return 0;
}
