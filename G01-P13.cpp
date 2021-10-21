//
//  Guión 1 - Tema 2
//  13. Diseñe un programa que resuelva una ecuación de segundo grado ax2+bx+c = 0. Debe pedir al usuario
//  que introduzca los valores de a, b y c de tipo entero y el programa indicará las dos posibles
//  raíces solución.
//  No considere el caso de raíces imaginarias.
//
//  @izzzhan
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;
    float sol1, sol2;
    float raiz;
    
    cout << "Digite los valores para resolver una ecuación de segundo grado de tipo ax2+bx+c." << endl;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    
    // Comprobamos si tiene solución. Si es que si, calculamos la ecuación.
    raiz = pow(b, 2)- 4 * a * c;
    
    cout << raiz;
    if (raiz > 0) {
        sol1 = (-b + sqrt(raiz)) / (2 * a);
        sol2 = (-b - sqrt(raiz)) / (2 * a);
        
        cout << "\nLa ecuacion tiene soluciones posibles." << endl;
        cout << "Sol 1: " << sol1 << endl;
        cout << "Sol 2: " << sol2 << endl;
    } else {
        cout << "\nLa ecuacion no tiene soluciones reales.";
    }
    
    
    return 0;
}
