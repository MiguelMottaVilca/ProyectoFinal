#include "estudiante.h"

using namespace std;
Estudiante::Estudiante(string nombre ,string apellido ,int edad ,string carrera ,float nota) : Persona (nombre ,apellido ,edad){
    this -> carrera = carrera;
    this -> nota = nota;
}
Estudiante::~Estudiante(){
    cout<<"SE DESTRUYO ESTUDIANTE"<<endl;
}
void Estudiante::setEstudiante(string _nombre , string _apellido , int _edad , string _carrera , float _nota){
    // this->setEstudiante();
    carrera = _carrera;
    nota = _nota;
}
string Estudiante::getCarrera(){
    return carrera;
}
float Estudiante::getNota(){
    return nota;
}