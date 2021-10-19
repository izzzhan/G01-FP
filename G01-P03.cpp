//
//  Guión 1 - Tema 2
//  3. ¿Qué mostraría por pantalla la ejecución del siguiente programa?
//  #include <iostream>
//  using namespace std;
//  int main () {
//      int primero, segundo, tercero;
//      cout << primero << ”\n” << segundo << ”\n” <<tercero;
//      return 0;
//  }
//
//  @izzzhan
//

#include <iostream>

using namespace std;

int main() {
    
    int primero, segundo, tercero;
    
    cout << primero << "\n" << segundo << "\n" << tercero << endl;
    

    return 0;
}

//  El resultado es aleatorio, puesto que aunque se han declarado no se han inicializado ni dado valores, por lo que
//  adquieren valores residuos que son los que muestran por pantalla.
