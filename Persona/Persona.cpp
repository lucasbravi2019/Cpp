#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
    string nombre;

    string apellido;

    int edad;

public:
    Persona()
    {
        this->nombre = "";
        this->apellido = "";
        this->edad = 0;
    };

    Persona(string nombre, string apellido, int edad)
    {
        this->nombre = nombre;
        this->apellido = apellido;
        this->edad = edad;
    }

    void setNombre(string nombre) { this->nombre = nombre; }

    string getNombre() { return this->nombre; }

    void setApellido(string apellido) { this->apellido = apellido; }

    string getApellido() { return this->apellido; }

    void setEdad(int edad) { this->edad = edad; }

    int getEdad() { return this->edad; }

    void crearPersona()
    {
        string nombre;
        string apellido;
        int edad;

        cout << "Ingrese el nombre de la persona\n";
        cin >> nombre;
        cout << "Ingrese el apellido de la persona\n";
        cin >> apellido;
        cout << "Ingrese la edad de la persona\n";
        cin >> edad;

        setNombre(nombre);
        setApellido(apellido);
        setEdad(edad);
    }

    void mostrarPersona()
    {
        cout << "Nombre: " << this->nombre << "\n";
        cout << "Apellido: " << this->apellido << "\n";
        cout << "Edad: " << this->edad << "\n";
    }
};
