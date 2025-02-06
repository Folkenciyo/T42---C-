/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:23:32 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/04 17:23:32 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain creation: Loading..." << std::endl;
    int i = 0;

    while(i < 100){
        std::cout << "Brain creation: Idea " << i << " generated!" << std::endl;
        _ideas[i] =  getRandomIdea();
        std::cout << "Brain creation: Idea " << i << ": " << _ideas[i] << std::endl;
        i++;
    }
    std::cout << "Brain creation: Done!" << std::endl;
}

Brain::Brain(Brain const &src){
    *this = src;
}

Brain &	Brain::operator=(Brain const &rSym){
    int i = 0;

    while(i++ < 100)
        _ideas[i] = rSym._ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destruction: Loading..." << std::endl;
    std::cout << "Brain destruction: Done!" << std::endl;
}

str Brain::getRandomIdea() const{
    str ideas[100] = {
        "Desarrollar juguetes interactivos para perros",
        "Crear una app de adopción de mascotas",
        "Investigar alimentos orgánicos para gatos",
        "Fomentar la adopción responsable de perros",
        "Desarrollar collares inteligentes para monitoreo de salud",
        "Promover eventos de socialización para perros",
        "Crear programas de entrenamiento para gatos",
        "Diseñar muebles funcionales para hogares con mascotas",
        "Desarrollar soluciones para la ansiedad por separación en perros",
        "Investigar alternativas saludables a los snacks para mascotas",
        "Fomentar el ejercicio físico en perros urbanos",
        "Crear plataformas de servicios veterinarios a domicilio",
        "Promover campañas de esterilización de mascotas",
        "Desarrollar camas ergonómicas para perros y gatos",
        "Diseñar areneros automáticos para gatos",
        "Fomentar el uso de productos eco-friendly para mascotas",
        "Crear soluciones para la limpieza de pelo de mascota en casa",
        "Desarrollar programas de educación sobre tenencia responsable",
        "Fomentar la adopción de mascotas adultas",
        "Investigar terapias asistidas por perros y gatos",
        "Promover la inclusión de mascotas en espacios públicos",
        "Desarrollar apps para monitorear la salud de las mascotas",
        "Crear juegos de estimulación mental para perros",
        "Fomentar la socialización temprana de cachorros",
        "Desarrollar soluciones para el transporte seguro de mascotas",
        "Diseñar bebederos automáticos para gatos",
        "Crear cursos online de entrenamiento para perros",
        "Promover la adopción en lugar de la compra de mascotas",
        "Investigar suplementos nutricionales para gatos mayores",
        "Desarrollar seguros de salud para mascotas accesibles",
        "Fomentar el ejercicio conjunto entre dueños y mascotas",
        "Crear plataformas para encontrar cuidadores de mascotas",
        "Diseñar juguetes resistentes para perros de razas grandes",
        "Investigar alternativas naturales a los antipulgas",
        "Promover la inclusión de mascotas en oficinas",
        "Desarrollar programas de bienestar para perros senior",
        "Fomentar la educación sobre el lenguaje corporal de las mascotas",
        "Crear iniciativas para ayudar a perros callejeros",
        "Desarrollar cepillos automáticos para el aseo de gatos",
        "Promover el turismo pet-friendly",
        "Investigar alimentos hipoalergénicos para mascotas",
        "Crear campañas de concientización sobre el abandono de mascotas",
        "Desarrollar soluciones para el control del peso en gatos",
        "Fomentar la adopción de perros con necesidades especiales",
        "Diseñar mochilas de transporte cómodas para gatos",
        "Crear collares personalizados con información de contacto",
        "Promover el respeto hacia los animales en niños",
        "Desarrollar cursos de primeros auxilios para mascotas",
        "Crear plataformas para reportar mascotas perdidas",
        "Fomentar la vacunación y desparasitación de mascotas",
        "Desarrollar camas térmicas para gatos en invierno",
        "Investigar la terapia con gatos para la salud mental",
        "Promover el reciclaje de productos para mascotas",
        "Desarrollar aplicaciones de rastreo para perros",
        "Crear espacios de recreo cerrados para perros en la ciudad",
        "Fomentar el uso de transportadoras seguras para viajes",
        "Desarrollar snacks naturales para gatos exigentes",
        "Diseñar correas ergonómicas para paseos largos",
        "Crear aplicaciones de adopción colaborativa de mascotas",
        "Fomentar la inclusión de perros en deportes al aire libre",
        "Desarrollar programas de entrenamiento virtual para perros",
        "Investigar materiales seguros para juguetes de mascotas",
        "Promover el reciclaje de collares y accesorios",
        "Desarrollar alternativas a las arenas comerciales para gatos",
        "Fomentar el respeto a las mascotas en comunidades vecinales",
        "Crear soluciones para la movilidad de perros mayores",
        "Desarrollar dispensadores inteligentes de comida para gatos",
        "Promover la adopción de gatos negros para romper mitos",
        "Fomentar el uso de tecnología para la seguridad de mascotas",
        "Crear iniciativas de rescate para gatos callejeros",
        "Desarrollar apps para llevar el historial veterinario",
        "Diseñar casas inteligentes para perros y gatos",
        "Investigar técnicas de masaje para mascotas",
        "Promover la adopción de mascotas en fechas especiales",
        "Desarrollar soluciones para el aseo automático de perros",
        "Fomentar la inclusión de perros en eventos deportivos",
        "Crear juguetes automáticos para el entretenimiento de gatos",
        "Promover el uso de materiales reciclados en productos para mascotas",
        "Desarrollar dispositivos de monitoreo para la actividad de mascotas",
        "Fomentar la educación sobre el comportamiento felino",
        "Desarrollar programas de acogida temporal para mascotas",
        "Promover la adopción de mascotas en refugios rurales",
        "Crear plataformas para compartir experiencias sobre mascotas",
        "Fomentar el respeto hacia los animales callejeros",
        "Desarrollar soluciones de aseo portátiles para perros",
        "Promover el cuidado responsable de mascotas durante vacaciones",
        "Crear campañas de concientización sobre el maltrato animal",
        "Desarrollar servicios de spa para perros y gatos",
        "Fomentar la inclusión de mascotas en actividades familiares"
    };

    return ideas[rand() % 100];
}