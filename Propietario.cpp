//
// Created by lufe y Gonzo Feb2024.
//
#include <iostream>
#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

Propietario::Propietario(int edad){
    this->edad = edad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::setIdentidad(std::string docIdentidad) {
    this->docIdentidad = docIdentidad;
}

std::string Propietario::mostrarInfo() {
    std::string mensaje;
    mensaje = "El nombre del propietario es: " + nombre + " su documento de identidad es: " + docIdentidad +
              " y su edad es: " + std::to_string(edad);
    return mensaje;
}

int Propietario::getEdad() {
    return edad;
}
