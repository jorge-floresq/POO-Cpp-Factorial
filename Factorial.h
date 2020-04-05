// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Factorial.h
// Propósito......: Implementación de la clase Factorial con métodos iterativo y recursivo. 
//                  Utiliza llamada a métodos para contabilizar el tiempo de ejecución de los métodos 
//                  iterativo y recursivo
// Versión........: 1.0     Version inicial
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
    // Método interfaz que evalúa el factorial de forma iterativa
    void calcFactIter(double n);
    // Método interfaz que valúa el factorial de forma recursiva
    void calcFactRec(double n);

};

