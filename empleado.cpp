#include "empleado.h" 

using namespace std;

Empleado::Empleado(string nombre ,string apellido ,int edad ,float salario  ,string trabajo ) : Persona (nombre ,apellido ,edad){
    this -> salario = salario;
    this -> trabajo = trabajo;
}
Empleado::~Empleado(){
    cout<<"SE DESTRUYO EMPLEADO"<<endl;
}
void Empleado::setEmpleado(string _nombre , string _apellido , int _edad , float _salario , string _trabajo){
    salario = _salario;
    trabajo = _trabajo;
}
float Empleado::getSalario(){
    return salario;
}
string Empleado::getTrabajo(){
    return trabajo;
}
