//
//  Tema 2
//  10. Diseñe un programa que halle la longitud, la superficie y el volumen de la circunferencia, círculo y esfera. 
//  El programa deberá pedir el radio de la c ircunferencia.
//
//  Fórmulas: Longitud = 2 * PI * R; Superficie = PI * R^2; Volumen = 4*PI*R^3/ 3
//
//  @izzzhan
//

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.1415

int main(){
  float radio;
  double longitud = 0, superficie = 0, volumen = 0;
  
  cout << "Digite el valor del radio: ";
  cin >> radio;
  
  // Longitud
  longitud = 2 * PI * radio;
  cout << "\nLongitud: " << longitud << endl;
  
  // Superficie
  superficie = PI * pow(radio,2);
  cout << "Superficie: " << superficie << endl;
  
  // Volumen
  volumen = (4 * PI * pow(radio,3)) / 3;
  cout << "Volumen: " << volumen << endl << endl;
  
  return 0;
} 
