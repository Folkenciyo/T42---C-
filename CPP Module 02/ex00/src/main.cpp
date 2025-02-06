/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:43:05 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/26 13:52:20 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void)
{   
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << "\n" << std::endl;
    return 0;
}


/* 
Ex00 : Fixed Point vs Floating Point (Punto Fijo vs Punto Flotante)

Imagina tener una regla que puede medir longitudes en centímetros. Un número de punto fijo
es como marcar un número específico de divisiones en la regla, digamos 10, y usarlas para 
medir cualquier longitud. Por ejemplo, si quieres medir 3.5 cm, usarías la 3ª y la 5ª división
en la regla. Si quieres medir 12.7 cm, usarías la 12ª y la 7ª división en la regla. El número 
de divisiones que usas es fijo, y solo puedes medir longitudes que sean múltiplos de 0.1 cm.

Un número de punto flotante es como marcar un número variable de divisiones en la regla, dependiendo 
de cuán preciso quieras ser. Por ejemplo, si quieres medir 3.14159 cm, usarías 5 divisiones en 
la regla, cada una representando 0.00001 cm. Si quieres medir 123456789 cm, usarías 9 divisiones en 
la regla, cada una representando 10000000 cm. El número de divisiones que usas es variable, y puedes
medir longitudes que no sean múltiplos de ninguna unidad fija.

En C++, los números de punto fijo no son directamente soportados por el lenguaje, pero puedes 
simularlos usando enteros y factores de escala. Por ejemplo, si quieres representar un número 
de punto fijo con 4 dígitos después del punto decimal, puedes usar un entero y multiplicarlo 
por 10000. Por ejemplo:

int x = 1234; // representa 0.1234
int y = 5678; // representa 0.5678
int z = x + y; // representa 0.6912

Los números de punto flotante son soportados por el lenguaje usando tipos como float y double. Estos
tipos almacenan el número (llamado la mantisa o significando) y la posición del punto 
decimal (llamado el exponente) por separado en formato binario. Por ejemplo:

float x = 3.14159; // almacenado como (1.570795 x 2^1) + (1 x 2^-20)
float y = 123456789; // almacenado como (1.4656613 x 2^26) + (1 x 2^-3)
float z = x + y; // almacenado como (1.4656613 x 2^26) + (1 x 2^-3) + (1.570795 x 2^1) + (1 x 2^-20)
La ventaja de los números de punto flotante es que pueden representar un rango más amplio de valores con 
diferentes niveles de precisión. La desventaja es que no son exactos y pueden introducir errores de redondeo 
o pérdida de precisión.

CASOS DE USO:

Números de punto fijo:

Aplicaciones financieras, como contabilidad, banca o impuestos, donde la representación exacta de los 
valores monetarios es importante.
Sistemas embebidos, como microcontroladores o procesadores de señal digital, donde la velocidad, el 
consumo de energía y el área del chip son factores críticos.
Procesamiento de audio y video, como compresión, filtrado o mezcla, donde la aritmética de punto 
fijo puede proporcionar mejor rendimiento y calidad que la aritmética de punto flotante.

Números de punto flotante:

Aplicaciones científicas e ingenieriles, como física, química, biología o astronomía, donde se necesitan 
representar y manipular valores muy pequeños o muy grandes.
Aplicaciones de gráficos y juegos, como renderizado, animación o simulación, donde la aritmética de punto 
flotante puede proporcionar efectos más realistas y dinámicos que la aritmética de punto fijo.
Aplicaciones de aprendizaje automático e inteligencia artificial, como redes neuronales, 
aprendizaje profundo o procesamiento de lenguaje natural, donde la aritmética de punto flotante puede 
proporcionar más flexibilidad y precisión que la aritmética de punto fijo.

 */