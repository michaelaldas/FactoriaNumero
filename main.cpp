#include <iostream>
#include <stdlib.h>
using namespace std;
//Se desea calcular el factorial de un numero entero.

//Algoritmo:
//1.INICIO
//3.Asignar numero, factorial=1
//4.Escribir un numero
//  4.1 numero
//5. i=1;i<=numero;i++
//   5.1 factorial=factorial
// 6.Imprimir resultado
//7.FIN
int main() {

    int numero, factorial=1;

    cout<<"Ingrese un numero: "; cin>>numero;
    for(int i=1;i<=numero;i++){
        factorial=factorial *i;
    }
    cout<<"\nEl factorial de "<<numero<<" es: "<<factorial<<endl;

    return 0;
}
