//
// Guión 1 - Tema 2
// 23. El estudio de las fuerzas de atracción o repulsión entre partículas cargadas fue realizado por el físico
//  francés Coulomb, cuya ley dice lo siguiente:
//      "Para cargas pequeñas (aproximadamente puntuales) la fuerza de atracción o de repulsión es directamente
//      proporcional al producto de las cargas e inversamente proporcional al cuadrado de la distancia que
//      las separa."
// Implementar un programa de modo que:
//  a) Declare tres variables locales: q1, q2 y r. Donde las cargas serán valores en micro C y la distnacia se
//      aportará por el usuario en metros. Hay que tener en cuenta que el usuario indica una carga en micro C pero
//      si antendemos a las unidades de la constante K en la fórmula se debe trabajar en C.
//  b) Solicite al usuario por teclado los valores de las cargas y la distnacia entre ellas.
//  c) Calcule y muestre por pantalla la fuerza de actracción/repulsión entre las cargas.
//
// @izzzhan
//

#include <iostream>
#include <stdlib.h>
#include <math.h>

#define k 9e9

using namespace std;

class leyAtraccion {
    double q1;
    double q2;
    double r;
    
public:
    void getDatos();
    double formulaFuerza();
};

void leyAtraccion::getDatos(){
    cout << "A continuación se va a aplicar la formula de la Ley  de Atraccion/Reaccion.";
    cout << "\nDigite el valor de la primera carga (q1) en micro C: ";
    cin >> q1;
    cout << "\nDigite el valor de la segunda carga (q2) en micro C: ";
    cin >> q2;
    cout << "\nA continuacion digite el la distnacia entre ambas cargas (r) en metros: ";
    cin >> r;
    cout << endl;
}

double leyAtraccion::formulaFuerza(){
    return k*(q1*1e-6*q2*1e-6)/pow(r,2);
}

int main(){
    leyAtraccion ley;
    
    ley.getDatos();
    cout << "La fuerza entre las dos cargas es: \n" << ley.formulaFuerza() << " N" << endl << endl;
    
    system("pause");
    return 0;
}
