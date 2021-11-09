//
// Guión 1 - Tema 2
// 22. Operaciones con complejos. Se define un número complejo z = (x, y) como un par ordenado de números reales donde
// x es la parte real e y la parte imaginaria.
// Los números complejos se pueden representar mediante dos ejes cartesianos donde la componte real está en el eje
// horizontal x y la parte imaginaria y en el eje vertical.
// Se pide implementar un programa que solicite los datos de dos complejos z1 =(a,b) y z2 =(c,d) y a continuación
// muestre por pantalla el resultado de Sumar, Restar, Multiplicar y
// Dividir ambos complejos.
// Dada las limitaciones de la pantalla un número complejo se mostrará de la forma cartesiana x + iy .
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Complejo{
    private:
        double a, b, c, d;
    public:
        void cargar();
        void sumar();
        void restar();
        void multiplicacion();
        void division();
};

void Complejo::cargar(){
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;
    cout << "\n ";
}

void Complejo::sumar(){
    cout << a << "+i" << b << " + " << c << "+i" << d << " = " << (a+c) << "+i" << (b+d) << "\n";
}

void Complejo::restar(){
    cout << a << "+i" << b << " + " << c << "+i" << d << " = " << (a-c) << "+i" << (b-d) << "\n";
}

void Complejo::multiplicacion(){
    cout << a << "+i" << b << " + " << c << "+i" << d << " = " << (a*c - b*d) << "+i" << (a*d + b*c) << "\n";
}

void Complejo::division(){
    cout << a << "+i" << b << " + " << c << "+i" << d << " = " << ((a*c + b*d)/(pow(c,2)+pow(d,2))) << "+i" << ((b*c - a*d)/(pow(c,2)+pow(d,2))) << "\n";
}

int main(){
    Complejo c;

    c.cargar();
    c.sumar();
    c.restar();
    c.multiplicacion();
    c.division();

    cout << "\n";

    system("pause");
    return 0;
}
