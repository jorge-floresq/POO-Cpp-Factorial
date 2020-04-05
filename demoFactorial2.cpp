// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: demoFactorial2.cpp
// Propósito......: Programa que utiliza la clase Factorial. 
// Versión........: 1.0     Version inicial
//

#include <iostream>
#include "Factorial.h"

int main()
{
    std::cout << "Demostracion de clase Factorial (metodos iterativo y recursivo)" << std::endl << std::endl;

    Factorial f;
    long double n;
    const int minvalor = 0;
    const int maxvalor = 79;

    std::cout << "Proporcione el numero a calcular factorial: ";
    std::cin >> n;
    if (!(n >= 0 && n <= maxvalor))
    {
        std::cerr << "ERR - El valor del numero debe estar entre " << minvalor << " y " << maxvalor << " terminos de la serie" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::cout << "Factorial iterativo:" << std::endl;
    f.calcFactIter(n);

    std::cout << std::endl;

    std::cout << "Factorial recursivo:" << std::endl;
    f.calcFactRec(n);

    return EXIT_SUCCESS;

}
