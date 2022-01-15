//
// Guión 1 - Tema 2
// 25. La energía cinética, en la mecánica clásica, una masa puntual depende de su masa y su velocidad. La energía
//  potencial gravitatoria se define como la energía que poseen los cuerpos por el hecho de poseer masa y estar
//  situados a una determinada distancia de la superficie terrestre. La energía mecánica es la suma de la energía
//  cinética más la energía potencial.
//  Implementar un programa de modo que:
//      a) Declare tres variables locales: m (expresada en kg), v (expresada en km/h) y h (expresada en km). El
//  alumno deberá tener en cuenta en qué unidad se almacenan los datos, y en qué unidad deben estar expresados para
//  hacer las operaciones correctamente, de modo que el programa deberá realizar las conversiones oportunas.
//      b) Solicite al usuario los valores de masa, velocidad y altura de un determinado cuerpo en las unidades
//  antes indicadas.
//      c) Calcule y muestre la energía cinética, la energía potencial y energía mecánica del cuerpo indicado por el
//  usuario.
//
// @izzzhan
//

#include <iostream>
#include <stdlib.h>
#include <math.h>

#define g 9.8

using namespace std;

class energias {
    double m;
    double v;
    double h;
    
public:
    void getDatos();
    double calcEC();
    double calcEP();
};

void energias::getDatos(){
    cout << "Vamos a calcular los tres tipos de energía a aprtir de los siguientes datos." << endl;
    cout << "Digite la masa (kg): ";
    cin >> m;
    cout << endl;
    cout << "Digite la velocidad (km/h): ";
    cin >> v;
    cout << endl;
    cout << "Digite la altura a la que se encuentra (km): ";
    cin >> h;
    cout << endl <<endl;
}

double energias::calcEC(){
    return 0.5*m*(pow(v/3.6, 2));
}

double energias::calcEP(){
    return m*g*(h*1000);
}

int main(){
    energias en;
    
    en.getDatos();
    
    cout << "\nLos resultados son: ";
    cout << "\n\tEnergia Cinetica: " << en.calcEC() << " J";
    cout << "\n\tEnergia Potencial: " << en.calcEP() << " J";
    cout << "\n\tEnergia Mecanica: " << en.calcEC() + en.calcEP() << " J";
    
    cout << endl << endl;
    
    system("pause");
    return 0;
}
