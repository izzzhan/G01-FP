//
//  Guión 1 - Tema 2
//  6. Diseñe un programa en C++ de tal forma que pedirá la nota de teoría y la nota de prácticas de 
//  un examen realizado (se suponen valoradas entre 0 y 10). Y mostrará por pantalla la nota final, sabiendo que la nota 
//  de teoría vale el 40% y la nota de prácticas vale el 60%.
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main(){
  float teoria;         // Nota del examen de teoría.
  float practicas;      // Nota del examen de prácticas.
  float media;          // Nota media; 0.4 de teoría y 0.6 de prácticas.
  
  cout << "Digite su nota de teoria: ";
  cin >> teoria;
  cout << "Digite su nota de practicas: ";
  cin >> practicas;
  
  // Calculamos su nota media
  media = 0.4 * teoria + 0.6 * practicas;
  
  cout << "\nSu nota media es de: " << media << " puntos." << endl;
  
  return 0;
}
