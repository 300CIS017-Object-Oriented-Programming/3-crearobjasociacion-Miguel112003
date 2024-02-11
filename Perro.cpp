#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->pRaza =new Raza();
    this->tamanio = "";
    this->color = "";
}

Perro::Perro(std::string nombre, int edad, Raza* pRaza, std::string color, std::string tamanio) : nombre(nombre), edad(edad), pRaza(pRaza), color(color), tamanio(tamanio) {}


void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

Raza *Perro::getRaza() {
    return this->pRaza;
}

void Perro::setRaza(Raza * pRaza) {
    this->pRaza = pRaza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}

Veterinario *Perro::getVeterinario() {
    return this->pVeterinario;
}

void Perro::agregarVeterinario(std::string nombre, int aniosExperiencia) {
    this->pVeterinario = new Veterinario(nombre, aniosExperiencia);
}

//Segun estuve analizando este agregarRaza no deberia existir, ya que al crear el objeto Perro con el constructor por defecto
//Me crea un nuevo objeto Raza el cual se construye con el constructor por defecto de la clase Raza, dejando los atributos sin informacion
//Pero si utilizo el constructor con parametros (El unico otro constructor) ya se me define una Raza al pasar una referencia a un objeto de clase Raza
//Por lo que si, creo que este metodo de aqui abajo no tiene utilidad a menos que cree un constructor de Perro que no tenga la raza definida
void Perro::agregarRaza(std::string nombre, std::string paisOrigen) {
    this->pRaza = new Raza(nombre, paisOrigen);
}


