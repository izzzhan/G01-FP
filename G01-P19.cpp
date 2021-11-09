//
// Guión 1 - Tema 2
// 19. Diseñe un programa que calcule y muestre por pantalla el perímetro y el área de un rectángulo. Para ello deberá
// solicitar por teclado el ancho y el largo del mismo.
//
// @izzzhan
//

#include <iostream>

using namespace std;

class rectangulo {
private:
    float ancho;
    float largo;
    
public:
    void pedirMedidas();    // Pide por pantalla las dimensiones del rectángulo.
    float calcPerimetro();  // Calcula el perímetro del rectángulo.
    float calcArea();       // Calcula el área del rectángulo
};

void rectangulo::pedirMedidas(){
    cout << "Digite el ancho del rectángulo: ";
    cin >> ancho;
    cout << "Digite el largo del rectángulo: ";
    cin >> largo;
}

float rectangulo::calcPerimetro(){
    return ((ancho * 2) + (largo * 2));
}

float rectangulo::calcArea(){
    return (ancho * largo);
}


int main(){
    rectangulo rec;
    
    rec.pedirMedidas();
    cout << "El perimetro del rectangulo es: " << rec.calcPerimetro() << endl;
    cout << "El area del rectangulo es: " << rec.calcArea() << endl;
    
    return 0;
}
