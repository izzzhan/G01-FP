//
//  Guión 1 - Tema 2
//  15. Diseñe un programa que solicite al usuario un sistema de ecuaciones lineales pidiendo los
//  coeficientes a, b, c, d, e, y f por teclado, y muestre por pantalla los valores de x e y, sabiendo que:
//          ax+by=c                 dx+ey=f
//      x=(ce-bf)/(ae-bd)       y=(af-cd)/(ae-bd)
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    float x, y;
    
    cout << "Digite valores para las siguientes coeficientes para hallar x e y." << endl;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "d: "; cin >> d;
    cout << "e: "; cin >> e;
    cout << "f: "; cin >> f;
    
    // Calculamos x e y.
    x = (c*e - b*f) / (a*e - b*d);
    y = (a*f - c*d) / (a*e - b*d);
    
    cout << "\nEl valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl << endl;
    
    return 0;
}
