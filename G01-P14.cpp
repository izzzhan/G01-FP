//
//  Guión 1 - Tema 2
//  14. Diseñe un programa que lea cinco notas de exámenes con decimales por teclado y calcule
//  la nota media obtenida. Los datos de entrada deben leerse en la misma línea y el resultado
//  deberá mostrarse por pantalla.
//
//  @izzzhan
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float ex1, ex2, ex3, ex4, ex5;
    float media = 0;
    
    cout << "Digite la nota del primer examen: ";
    cin >> ex1;
    system("cls");
    cout << "Digite la nota del segundo examen: ";
    cin >> ex2;
    system("cls");
    cout << "Digite la nota del tercer examen: ";
    cin >> ex3;
    system("cls");
    cout << "Digite la nota del cuarto examen: ";
    cin >> ex4;
    system("cls");
    cout << "Digite la nota del quinto examen: ";
    cin >> ex5;
    system("cls");
    
    // Calculamos la media.
    media = (ex1 + ex2 + ex3 + ex4 + ex5) / 5;
    
    cout << "\nLa nota media de los examenes es: " << media << endl << endl;
    
    return 0;
}
