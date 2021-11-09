//
// Guión 1 - Tema 2
// 20. Movimiento rectilíneo uniformemente acelerado es aquel en el que un móvil/objeto se desplaza sobre una
// trayectoria recta estando sometido a una aceleración constante.
// La fórmulas que rigen este movimiento son las siguientes:
//      V =V0 + a * t
//      S = S0 + V0 * t + 1/2 * a * t^2
// Implementar un programa que solicite los valores necesarios V0 , S0 , a , t y muestre por pantalla soluciones a
// problemas como este ejemplo:
// "Un Formula 1 comienza su vuelta de clasificación con una velocidad inicial de 69 m/s, ¿Qué velocidad final tendrá y
// cuantos metros habrá recorrido si el piloto acelera a 3.6 m/s^2 durante 10 segundos ?."
//
// @izzzhan
//

#include <iostream>

using namespace std;

class mrua {
private:
    float vIni;
    float sIni;
    float a;
    float t;
    
public:
    void pedirDatos();
    float calcV(); // Calcula la velocidad final del móvil.
    float calcS(); // Calcula el espacio total recorrido por el móvil.
};

void mrua::pedirDatos(){
    cout << "Introduzca todos los datos en medidas del sistema internacional.\n";
    cout << "Digite la velocidad inicial del movil: ";
    cin >> vIni;
    cout << "Digite la distancia de partida del movil: ";
    cin >> sIni;
    cout << "Digite la aceleracion del movil: ";
    cin >> a;
    cout << "Digite el tiempo en el que se desplaza el movil: ";
    cin >> t;
}

float mrua::calcV(){
    return (vIni + a * t);
}

float mrua::calcS(){
    return (sIni + vIni * t + 0.5 * a * (t*t));
}

int main(){
    mrua problema;
    
    problema.pedirDatos();
    cout << "La velocidad final es de: " << problema.calcV() << "m/s";
    cout << "La distancia final es de: " << problema.calcS() << "m";
    
    return 0;
}
