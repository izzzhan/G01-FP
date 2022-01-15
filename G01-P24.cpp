//
// Guión 1 - Tema 2
// 24. Si en las proximidades de una carga puntual q, colocamos sucesivamente cargas de prueba qi, sabemos por la
//  ley de Coulomb que dichas cargas se verán sometidas a una fuerza eléctrica. La intensidad del campo eléctrico E,
//  medida en Newton/Culombio, creado por dicha carga puntual, se puede expresar del siguieunte modo:
//      E=q/(4*pi*ℇ*r^2)
// Implementar un programa de modo que:
//  a) Declare dos variables locales q (valor en micro C) y r (valor en m). Al igual que en el ejercicios anterios,
//      hay que tener en cuenta que el usuario indicará una carga en micro C pero si atendemos a las unidades de la
//      constante dieléctrica en la fórmula se debe trabajar en C.
//  b) Solicite al usuario los valores de la carga y la distancia.
//  c) Calcule y muestre por pantalla la intensidad del campo eléctrico creado por dicha carga puntual a la
//      distancia r.
//
// @izzzhan
//

#include <iostream>
#include <stdlib.h>
#include <cmath>

#define pi 3.14159
#define cd 8.85e-12

using namespace std;

class leyCoulomb {
    double q;
    double r;
    
public:
    void getDatos();
    double calcular();
};

void leyCoulomb::getDatos(){
    cout << "Vamos a aplicar la Ley de Coulomb." << endl;
    cout << "Digite el valor de la carga (micro C): ";
    cin >> q;
    cout << "\nDigite el valor de la distancia puntual (metros): ";
    cin >> r;
    cout << endl << endl;
}

double leyCoulomb::calcular(){
    return (q*1e-6)/(4*pi*cd*(pow(r, 2)));
}

int main(){
    leyCoulomb ley;
    
    ley.getDatos();
    cout << "La intensidad del campo electrico creado por la carga es: \n\t\t" << ley.calcular() << " N/C";
    cout << endl << endl;
    
    system("pause");
    return 0;
}
