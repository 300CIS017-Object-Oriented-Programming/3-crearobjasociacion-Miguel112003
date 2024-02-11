//
// Created by Miguel on 10/02/2024.
//

#include "Raza.h"

Raza::Raza() {
    this->nombre = "";
    this->paisOrigen = "";
}

Raza::~Raza() {

}

Raza::Raza(std::string nombre, std::string paisOrigen) {
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

std::string Raza::getNombre() {
    return nombre;
}

std::string Raza::getOrigen() {
    return paisOrigen;
}

void Raza::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Raza::setOrigen(std::string paisOrigen) {
    this->paisOrigen = paisOrigen;
}




