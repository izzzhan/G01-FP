//
//  Guión 1 - Tema 2
//  16. Diseñe una función que convierta una cantidad positiva de segundos leída desde teclado a su equivalente en
//  horas, minutos y segundos, expresando estos valores por pantalla. Si se lee, por ejemplo, el valor de 3701 seg.
//  debe mostrar por pantalla 1 hora, 1 minuto y 41 segundos.
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main(){
    int segs;
    int hrs, min, segsFinales;
    int div1;
    
    cout << "Digite una cantidad de segundos: ";
    cin >> segs;
    
    // CONVERTIMOS A HORAS MINUTOS Y SEGUNDOS
    segsFinales = segs%60;
    div1 = segs/60;
    min = div1%60;
    hrs = div1/60;
    
    cout << "\nEl tiempo total es de: " << endl;
    cout << "\n\t" << hrs << " h " << min << " min " << segsFinales << " segs" << endl;
    
    
    return 0;
}
