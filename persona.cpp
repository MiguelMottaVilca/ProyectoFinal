#include "persona.h"

using namespace std;

Persona::Persona(string nombre , string apellido , int edad){
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> edad = edad;
}
Persona::~Persona(){
    cout<<"SE DESTRUYO PERSONA"<<endl;
}
void Persona::setPersona(string _nombre , string _apellido , int _edad ){
    nombre = _nombre;
    apellido = _apellido;
    edad = _edad;
}
string Persona::getNombre(){
    return nombre;
}
string Persona::getApellido(){
    return apellido;
}
int Persona::getEdad(){
    return edad;
}
