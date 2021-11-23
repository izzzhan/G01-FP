 //
 //  Guión 1 - Tema 2
 //  4. Diseñe un programa que intercambie el valor de dos variables de tipo entero leídas desde teclado, sacando su
 //  valor por pantalla.
 //
 //  @izzzhan
 //

 #include <iostream>

 using namespace std;

 int main() {
     int a, b, aux;

     cout << "Digite un valor para a: "; cin >> a;
     cout << "Digite un valor para b: "; cin >> b;
     cout << "\na = " << a << "\nb = " << b;

     // CAMBIAMOS LAS VARIABLES
     aux = a;
     a = b;
     b = aux;

     cout << "\nEl nuevo valor de a y b es: " << "\n a = " << a << "\n b = " << b << endl;

     return 0;
 }
