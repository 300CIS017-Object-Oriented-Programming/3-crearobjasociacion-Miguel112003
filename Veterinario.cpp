//
// Created by aleja on 10/02/2024.
//

#include "Veterinario.h"
#include <iostream>

Veterinario::Veterinario() {
    this->nombre = "";
    this->aniosExperiencia = 0;

}

//No tengo muy claro como funcionan los destructores
Veterinario::~Veterinario() {

}

Veterinario::Veterinario(std::string nombre, int aniosExperiencia) {
    this->nombre = nombre;
    this->aniosExperiencia = aniosExperiencia;

}

std::string Veterinario::getNombre() {
    return nombre;
}

int Veterinario::getExperiencia() {
    return aniosExperiencia;
}

void Veterinario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Veterinario::setExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}
