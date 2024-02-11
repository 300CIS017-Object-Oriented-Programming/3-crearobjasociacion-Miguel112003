//
// Created by Miguel Bejarano on 10/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H


#include <string>

class Veterinario{
private:
    std::string nombre;
    int aniosExperiencia;

public:
    Veterinario();
    ~Veterinario();
    Veterinario(std::string nombre, int aniosExperiencia); //Constructor con parametros

    std::string getNombre();
    int getExperiencia();
    void setNombre(std::string nombre);
    void setExperiencia(int aniosExperiencia);
};

#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
