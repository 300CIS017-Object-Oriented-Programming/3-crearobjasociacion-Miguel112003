//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

class Propietario {

private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:

    Propietario(int edad);
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre, std::string docIdentidad);

    std::string mostrarInfo();

    std::string getNombre();
    void setNombre(std::string nombre);
    void setIdentidad(std::string docIdentidad);
    int getEdad();

};


#endif //PROPIETARIO_H
