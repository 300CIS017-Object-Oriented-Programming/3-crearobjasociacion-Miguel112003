//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    Raza* pRaza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;

public:
    Perro(std::string nombre, int edad, Raza* pRaza, std::string color, std::string tamanio);
    Perro();
    ~Perro(); //Destructor

    void ladrar();

    Propietario * getPropietario();
    // Sirve para instancia un objeto propietario al atributo pPropietario de la clase perro, es decir define los atributos del objeto propietario al cual apunta pPropietario
    void agregarPropietario(std::string nombre, std::string docIdentidad);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    Veterinario * getVeterinario();
    void agregarVeterinario(std::string nombre, int aniosExperiencia);


    Raza * getRaza();
    void setRaza(Raza * pRaza);
    void agregarRaza(std::string nombre, std::string paisOrigen);


    int getEdad();
    void setEdad(int edad);
//    std::string getRaza();
//    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);


};
#endif
