//
//  Guión 1 - Tema 2
//  7. Dadas las coordenadas por teclado x e y de dos puntos de un plano, muestre por pantalla la distancia 
//  que existe entre estos dos puntos.
//
//  @izzzhan
//
#include <iostream>
#include <cmath>    // Añadimos esta biblioteca pra poder usar las funciones pow y sqrt para la fórmula

using namespace std;

int main(){
  /* 
  * Tenemos dos puntos, x (definido por (x1, x2)) e y (definido por (y1,y2)). 
  * Sabiendo que la fórmula para hallar la distancia entre dos puntos es:
  *   distancia = raizcuadrada((x2-x1)^2 + (y2-y1)^2)
  */
  
  int x1, y1;       // Coordenadas del punto X.
  int x2, y2;       // Coordenadas del punto Y.
  double distancia;
  
  cout << "Digite las coordenadas del punto X." << endl;
  cout << "x1: "; cin >> x1;
  cout << "y1: "; cin >> y1;
  cout << endl << endl;
  cout << "Digite las coordenadas del punto Y." << endl;
  cout << "x2: "; cin >> x2;
  cout << "y2: "; cin >> y2;
  
  // Calculamos la distancia usando la fórmula
  distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  
  cout << "\n\nLa distancia entre ambos puntos es: " << distancia << endl;
  
  return 0;
}
