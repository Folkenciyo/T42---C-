EX00
----------------------------------------
En C++, las excepciones son mecanismos que permiten manejar errores o condiciones excepcionales que ocurren durante la ejecución de un programa. Las excepciones se utilizan para separar el código de manejo de errores del código principal, lo que mejora la legibilidad y el mantenimiento del código.

### Declaración de Excepciones en el Código Proporcionado

En el archivo `Bureaucrat.hpp`, se declaran dos clases de excepción: `GradeTooHighException` y `GradeTooLowException`. Ambas clases heredan de la clase estándar `std::exception`.

### Explicación del Código

```cpp
class GradeTooHighException : public std::exception {
public:
    virtual const char *what() const throw();
};

class GradeTooLowException : public std::exception {
public:
    virtual const char *what() const throw();
};
```

#### Detalles

1. **Herencia de `std::exception`**:
   - Ambas clases (`GradeTooHighException` y `GradeTooLowException`) heredan de `std::exception`, lo que las convierte en tipos de excepción personalizados que pueden ser lanzados y capturados usando el mecanismo de excepciones estándar de C++.

2. **Método `what()`**:
   - El método `what()` es una función virtual que se sobrescribe para proporcionar un mensaje de error específico.
   - **`const char *what() const throw();`**:
     - **`const`**: Indica que el método no modificará el estado del objeto.
     - **`throw()`**: Especifica que este método no lanzará ninguna excepción (esto es una especificación de excepción obsoleta en C++11 y posteriores, pero aún se encuentra en código más antiguo).

### Ejemplo de Implementación

Aquí hay un ejemplo de cómo se podría implementar el método `what()` en el archivo de implementación correspondiente (`Bureaucrat.cpp`):

```cpp
#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}
```

### Uso de Excepciones

Las excepciones pueden ser lanzadas usando la palabra clave `throw` y capturadas usando bloques `try` y `catch`.

#### Ejemplo de Uso

```cpp
#include "Bureaucrat.hpp"

void someFunction() {
    try {
        // Código que puede lanzar una excepción
        throw Bureaucrat::GradeTooHighException();
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    }
}
```

### Resumen

- **Excepciones**: Mecanismo para manejar errores y condiciones excepcionales.
- **Declaración**: Las clases `GradeTooHighException` y `GradeTooLowException` heredan de `std::exception` y sobrescriben el método `what()` para proporcionar mensajes de error específicos.
- **Uso**: Las excepciones se lanzan con `throw` y se capturan con bloques `try` y `catch`.

------------------

La sobrecarga del operador de inserción (`<<`) para la clase `Bureaucrat` se declara fuera de la clase por varias razones:

### 1. **Simetría y Consistencia**

El operador `<<` es un operador binario que toma dos operandos: un objeto `std::ostream` y un objeto de la clase `Bureaucrat`. Para mantener la simetría y consistencia, se declara como una función no miembro (aunque puede ser amiga de la clase).

### 2. **Acceso a los Miembros Privados**

Para acceder a los miembros privados de la clase `Bureaucrat`, la función de sobrecarga del operador puede ser declarada como amiga de la clase. Esto permite que la función acceda a los miembros privados sin ser un miembro de la clase.

### 3. **Separación de Responsabilidades**

Declarar la sobrecarga del operador fuera de la clase ayuda a mantener una clara separación de responsabilidades. La clase `Bureaucrat` se encarga de su propia lógica y estado, mientras que la función de sobrecarga del operador se encarga de la lógica de salida.

### Ejemplo Completo

#### Declaración en el Archivo de Encabezado (`Bureaucrat.hpp`)

```cpp
class Bureaucrat {
public:
    // Otros miembros de la clase

    // Declaración de la función amiga
    friend std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
};

// Declaración de la función de sobrecarga del operador
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
```

#### Definición en el Archivo de Implementación (`Bureaucrat.cpp`)

```cpp
#include "Bureaucrat.hpp"
#include <iostream>

// Definición de la función de sobrecarga del operador
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) {
    // Acceso a los miembros privados de Bureaucrat
    out << "Bureaucrat: " << b.getName() << ", Grade: " << b.getGrade();
    return out;
}
```

### Resumen

- **Simetría y Consistencia**: Mantiene la simetría del operador binario.
- **Acceso a Miembros Privados**: Puede ser amiga de la clase para acceder a miembros privados.
- **Separación de Responsabilidades**: Mantiene la lógica de la clase y la lógica de salida separadas.

Declarar la sobrecarga del operador `<<` fuera de la clase `Bureaucrat` es una práctica común que mejora la claridad y la organización del código.