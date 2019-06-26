#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona{
    protected:
        string nombre;
        string apellido;
        int edad;
    public:
        Persona(string ,string ,int );
        ~Persona();
        void setPersona(string ,string ,int);
        string getNombre();
        string getApellido();
        int getEdad();
};

#endif