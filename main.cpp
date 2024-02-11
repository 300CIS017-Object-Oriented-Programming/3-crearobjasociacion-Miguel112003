#include <iostream>

#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {

    Raza mastinnapolitano("Mastin Napolitano", "Italia");
    Raza maltes("Maltes", "Italia");


    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza(&mastinnapolitano);

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;


    //Creo el objeto de clase Perro usando new y lista inicializadora
    Perro *solano = new Perro("Solano", 21, &maltes, "azul", "Grande");

    //Pruebo el metodo ladrar
    solano->ladrar();

    //Creo un propietario en el heap, usando el constructor de un parametro
    Propietario *sinisterra = new Propietario(22);

    //Le asigno atributos
    sinisterra->setNombre("Sinisterra");
    sinisterra->setIdentidad("1005968663");

    //Pruebo mostarInfo
    std::cout << sinisterra->mostrarInfo() << std::endl;

    //Le agrego un propietario al perro que cree antes, los asocio
    solano->agregarPropietario("Miguel", "1005968664");


    std::cout << "El nombre del propietario del perro Solano es: " << solano->getPropietario()->getNombre() << std::endl;

    std::cout << "La edad el propietario del perro Solano es: " << solano->getPropietario()->getEdad() << std::endl;

    //Le consigo un veterinario a mi canino
    solano->agregarVeterinario("Federiko", 72);

    std::cout << "El nombre del veterinario del canino: " << solano->getNombre() << " es: " << solano->getVeterinario()->getNombre() << std::endl;

    std::cout << "AQUI EMPIEZA EL PASO 3 DE LA TAREA, YA MODIFIQUE LA CLASE PERRO PARA QUE SE ASOCIE CON LA CLASE RAZA" << std::endl;

    //Pruebo la modificacion al atributo raza... que dolor de cabeza esto
    std::cout << "La raza del canino: " << firulais.getNombre() << " es: " << firulais.getRaza()->getNombre() << std::endl;
    std::cout << "El origen de la raza del canino: " << firulais.getNombre() << " es: " << firulais.getRaza()->getOrigen() << std::endl;
    return 0;
}
