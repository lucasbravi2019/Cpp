#include <iostream>
#include "Persona.cpp "
using namespace std;
int main(int argc, char const *argv[])
{
    Persona persona = Persona();
    persona.mostrarPersona();
    persona.crearPersona();
    persona.mostrarPersona();
    return 0;
}