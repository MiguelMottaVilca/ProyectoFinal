#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "main.h"
#include "estudiante.h"
#include "empleado.h" 
#include "profesor.h"

//using namespace std;
using namespace Main;


string llenadoEstudiante(){
    string nombre , apellido , carrera;
    int edad , notas ;

    std::cin.ignore();

    std::cout<<"NOMBRE: ";std::getline(std::cin , nombre);
    std::cout<<"APELLIDO: ";std::getline(std::cin , apellido);
    std::cout<<"EDAD: ";std::cin>> edad;
    std::cin.ignore();
    std::cout<<"CARRERA: ";std::getline(std::cin , carrera);
    std::cout<<"CANTIDAD DE CURSOS: ";std::cin>> notas;
    std::cout<<endl;
    Estudiante estudiante(nombre,apellido,edad,carrera,notas);

    system("clear"); 

    string text;
    ostringstream aux;

    aux<< nombre <<" "<< apellido <<"_"<< edad <<"_"<< carrera <<"_"<< notas <<"----";

    text = aux.str();

    char val;
    std::cout<<"¿Quires crear otro Estudiante? S/N ";std::cin >> val ;

    if (val == 's'){
        llenadoEstudiante();
    }
    if(val == 'n'){
        menu();
    } 
    return text ;
}
string llenadoEmpleado(){
    string nombre, apellido,trabajo,curso;
    int edad;
    float sueldo;
    
    std::cin.ignore();

    std::cout<<"NOMBRE: ";std::getline(std::cin , nombre);
    std::cout<<"APELLIDO: ";std::getline(std::cin , apellido);
    std::cout<<"EDAD: ";std::cin>> edad;
    std::cout<<"SUELDO: ";std::cin>> sueldo;
    std::cout<<"TRABAJO: ";std::cin>> trabajo;
    std::cout<<endl;
    Empleado empleado(nombre,apellido,edad,sueldo,trabajo);

    system("clear"); 

    string text;
    ostringstream aux;

    aux<< nombre <<"_"<< apellido <<"_"<< edad <<"_"<< sueldo <<"_"<< trabajo <<"----";

    text = aux.str();

    char val;
    std::cout<<"¿Quires crear otro Empleado? S/N ";std::cin >> val ;
    std::cout<< endl;

    if (val == 's'){
        llenadoEmpleado();
    }
    if(val == 'n'){
        menu();
    } 
    return text ;
}
string llenadoProfesor(){
    string nombre, apellido,curso;
    int edad;
    float  salario;
    
    std::cin.ignore();

    std::cout<<"NOMBRE: ";getline(std::cin , nombre);
    std::cout<<"APELLIDO: ";getline(std::cin , apellido);
    std::cout<<"EDAD: ";std::cin>> edad;
    std::cout<<"SUELDO: ";std::cin>> salario;
    std::cout<<"CURSO: ";std::cin>>curso;
    std::cout<<endl;

    Profesor profesor(nombre,apellido,edad,salario,curso);

    system("clear"); 

    string text;
    ostringstream aux;

    aux<< nombre <<"_"<< apellido <<"_"<< edad <<"_"<< salario <<"_"<< curso <<"----";

    text = aux.str();

    char val;
    std::cout<<"¿Quieres crear otro Empleado? S/N ";std::cin >> val ;
    std::cout<< endl;

    if(val == 's'){
        llenadoEmpleado();
    }
    if(val == 'n'){
        menu();
    } 
    return text ;
}
void buscar4(){
    string temp;

    system("clear");
    string search;
    std::cin.ignore();
    std::cout<< "Digitar nombre o apellido: ";std::getline(std::cin , search);
    temp = lecturaAlumnos() ;
    vector <int> aux_1 = buscarPos(temp,search); 
    mostrar(aux_1,temp);
    temp.clear();  
}
void buscar5(){
    string temp , search;
    system("clear");
    std::cin.ignore();
    std::cout<< "Digite nombre o apellido: ";std::getline(std::cin , search);
    temp = lecturaEmpleados() ;
    std::cout<<temp<<std::endl;
    vector <int> aux_2 = buscarPos(temp,search); 
    mostrar(aux_2,search);
    temp.clear(); 
}
void buscar6(){
    string temp , search;
    system("clear");
    std::cin.ignore();
    std::cout<< "Digite nombre o apellido: ";std::getline(std::cin , search);
    temp = lecturaProfesores() ;
    std::cout<< temp <<std::endl;
}

void ejecutar(){
    bool iniciar = true;
    int num  ;

    while( iniciar == true){
        std::cout<<"DIGITE NUMERO: ";std::cin>>num;
        std::cout<<endl;

        if (num == 1){
            system("clear"); 
            agregarAlumno(llenadoEstudiante());
            num = 0;
            ejecutar();
        }
        if (num == 2){
            system("clear");
            agregarProfesor(llenadoProfesor());
            num = 0;
            ejecutar();
        }
        if (num == 3){
            system("clear"); 
            agregarEmpleado(llenadoEmpleado());
            num = 0;
            ejecutar();     
        } 
        if (num == 4){
            string aux;
            buscar4();
            std::cout<<"QUIERE BUSCAR A OTRO ALUMNO? S/N  ";std::cin>>aux;
            if (aux == "s"){
                buscar4();
            }
        }
        if (num == 5){
            string aux;
            buscar5();
            std::cout<<"QUIERE BUSCAR A OTRO ALUMNO? S/N  ";std::cin>>aux;
            if (aux == "s"){
                buscar4();
            }
        }
        if (num == 6){
            string aux;
            buscar6();
            std::cout<<"QUIERE BUSCAR A OTRO ALUMNO? S/N  ";std::cin>>aux;
            if (aux == "s"){
                buscar4();
            }
        }
        if (num == 0)
            iniciar = false;
    }
}


int main(){

    menu();
    ejecutar();

    return 0 ;
}
