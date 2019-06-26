#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "persona.h"

using namespace std;

class Empleado : public Persona{
    private:
        float salario;
        string trabajo;
    public:
        Empleado(string ,string ,int ,float , string ) ;
        ~Empleado();
        void setEmpleado(string ,string ,int  ,float , string );
        float getSalario();
        string getTrabajo();
};

#endif  //EMPLEADO_H