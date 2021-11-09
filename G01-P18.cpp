//
// Guión 1 - Tema 2
// 18. Diseñe un programa para calcular el sueldo de un empleado, en función del número de horas normales y extras
// trabajadas. Las horas normales se pagan a 5 €, las extraordinarias a 8 € y se aplica siempre una retención del 15%.
// El usuario del programa deberá indicar como datos de entrada el número de horas trabajadas de cada tipo.
//
// @izzzhan
//

#include <iostream>

using namespace std;

class empleado {
private:
    int horasnormales, horasextras;
public:
    void cargar();  //Pedirá por teclado las horas normales y las horas extras trabajadas.
    float nomina(); //Devolverá el sueldo que cobrará después de la retención.
};

void empleado::cargar(){
    cout << "Digite el numero de horas normales trabajadas: ";
    cin >> horasnormales;
    cout << "Digite el numero de horas extras trabajadas: ";
    cin  >> horasextras;
    cout << "\n";
}

float empleado::nomina(){
    return ((horasnormales*5)+(horasextras*8))*0.85;
}

int main(){
    empleado e;
    
    e.cargar();
    cout << "El sueldo a cobrar del empleado es de: " << e.nomina() << " euros" << endl;
    
    return 0;
}
