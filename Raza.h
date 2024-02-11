//
// Created by aleja on 10/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZA_H
#define INC_3_CREAROBJASOCIACION_RAZA_H

#include <string>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;

public:
    Raza();
    ~Raza();
    Raza(std::string nombre, std::string paisOrigen);

    std::string getNombre();
    std::string getOrigen();
    void setNombre(std::string nombre);
    void setOrigen(std::string paisOrigen);
};


#endif //INC_3_CREAROBJASOCIACION_RAZA_H
