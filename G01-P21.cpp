//
// Guión 1 - Tema 2
// 21.Operaciones con Fracciones. Una Fracción es la expresión de una cantidad x dividida entre otra cantidad y*(x/y),
// es decir que representa el cociente no efectuado de números. En la fracción "y" el denominador expresa el número de
// partes en las que se trocea la unidad, y el numerador "x" indica cuántas partes se toman.
// Se pide implementar un programa que solicite los datos de dos fracciones b/a y d/c y muestre
// por pantalla el resultado de Sumar, Restar, Multiplicar y Dividir ambas fracciones. Dada las limitaciones de la
// pantalla el ejemplo anterior se mostraría:
//      3/4 + 1/4 = 4/4
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>

using namespace std;

class Fracciones{
    private:
        int a, b, c, d;
    public:
        void cargar();
        void sumar();
        void restar();
        void multiplicacion();
        void division();
};

void Fracciones::cargar(){
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

void Fracciones::sumar(){
    cout << a << "/" << b << " + " << c << "/" << d << " = " << (a*d + b*c) << "/" << (b*d) << "\n";
}

void Fracciones::restar(){
    cout << a << "/" << b << " - " << c << "/" << d << " = " << (a*d - b*c) << "/" << (b*d) << "\n";
}

void Fracciones::multiplicacion(){
    cout << a << "/" << b << " * " << c << "/" << d << " = " << (a*c) << "/" << (b*d) << "\n";
}

void Fracciones::division(){
    cout << a << "/" << b << " / " << c << "/" << d << " = " << (a*d) << "/" << (b*c) << "\n";
}

int main(){
    Fracciones f;

    f.cargar();
    f.sumar();
    f.restar();
    f.multiplicacion();
    f.division();

    cout << "\n";

    system("pause");
    return 0;
}
