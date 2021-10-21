//
//  Guión 1 - Tema 2
//  17. Suponga que observa un presupuesto por arreglar la carretera entre dos pueblos de su provincia de 15000 metros
//  de longitud de acuerdo a la fórmula que se pone a continuación. ¿Dará el mismo resultado las dos asignaciones
//  siguientes en un programa en C++? Diseñe un programa en C++ y muestre por pantalla el resultado.
//
//  Precio_total_en_euros = 5000 * (longitud_en_metros / 5280.0);
//  Precio_total_en_euros = 5000 * (longitud_en_metros / 5280);
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main(){
    int Precio_total_en_euros1;     // Si las variables son de tipo entero los resultados cambian notablemente,
    int Precio_total_en_euros2;     // sin embargo, si las varaibles son de tipo flotante muestran el mismo
    int longitud_en_metros = 15000; // resultado.
    
    cout << "\t*** PRIMERA FORMULA ***";
    Precio_total_en_euros1 = 5000 * (longitud_en_metros / 5280.0);
    cout << "\nEl precio total en euros es de: " << Precio_total_en_euros1 << " €";
    
    cout << "\n\t*** SEGUNDA FORMULA ***";
    Precio_total_en_euros2 = 5000 * (longitud_en_metros / 5280);
    cout << "\nEl precio total en euros es de: " << Precio_total_en_euros2 << " €";
    
    cout << endl << endl;
    
    
    return 0;
}
