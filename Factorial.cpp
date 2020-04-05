// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Factorial.cpp
// Propósito......: Implementación de la clase Factorial con métodos iterativo y recursivo. 
//                  Utiliza llamada a métodos para contabilizar el tiempo de ejecución de los métodos 
//                  iterativo y recursivo
// Versión........: 1.0     Version inicial
//

#include <iostream>
#include <ctime>
#include "Factorial.h"

// Aqui se hace la iteración al utilizar un ciclo/bucle en la implementación (usa variable como acumulador)
// utiliza long double por la magnitud del facorial (crece muy rápido!)
long double Factorial::factoriali(double n)
{
    long double fact = 1.0;     // acumulador
    long double i = 1.0;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

// Aqui se hace la recursividad al llamar la la funcion dentro de si misma
// utiliza long double por la magnitud del facorial (crece muy rápido!)
long double Factorial::factorialr(double n)
{
    if (n == 0.0)           // Caso base
        return 1.0;
    else                    // Caso recursivo
        return n * factorialr(n - 1.0);
}

Factorial::Factorial()
{
}

Factorial::~Factorial()
{
}

void Factorial::calcFactIter(double n)
{
    clock_t time_ex = clock();  // para contabilizar el tiempo de ejecución

    std::cout << n << "! = " << factoriali(n) << std::endl;
    time_ex = clock() - time_ex;

    // el tiempo por defecto viene en ciclos de reloj, se usa macro para converir a segundos 
    std::cout << "Tiempo de ejecucion " << 1000.0 * (float)time_ex / CLOCKS_PER_SEC << " ms" << std::endl;

}

void Factorial::calcFactRec(double n)
{
    clock_t time_ex = clock();

    std::cout << n << "! = " << factorialr((double)n) << std::endl;
    time_ex = clock() - time_ex;

    std::cout << "Tiempo de ejecucion " << 1000.0 * (float)time_ex / CLOCKS_PER_SEC << " ms" << std::endl;
}
