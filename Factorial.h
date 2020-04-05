// UVM Plantel....: Hispano
// Carrera........: Ingenier�a en Sistemas Computacionales
// Materia........: Programaci�n Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Factorial.h
// Prop�sito......: Implementaci�n de la clase Factorial con m�todos iterativo y recursivo. 
//                  Utiliza llamada a m�todos para contabilizar el tiempo de ejecuci�n de los m�todos 
//                  iterativo y recursivo
// Versi�n........: 1.0     Version inicial
//

#pragma once

class Factorial
{
private:
    // Implementa algoritmo iterativo para el factorial
    long double factoriali(double);
    // Implementa algoritmo recursivo para el factorial
    long double factorialr(double);
public:
    // Constructor
    Factorial();
    // Destructor
    ~Factorial();
    // M�todo interfaz que eval�a el factorial de forma iterativa
    void calcFactIter(double n);
    // M�todo interfaz que val�a el factorial de forma recursiva
    void calcFactRec(double n);

};

