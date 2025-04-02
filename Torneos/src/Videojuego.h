//
// Created by serag on 4/1/2025.
//

#ifndef JUEGO_VIDEOJUEGO_H
#define JUEGO_VIDEOJUEGO_H
#include <iostream>
#include <string>

using namespace std;
class Jugador;
class Videojuego{
private:
    int codigo;
    string nombre;
    string genero;
    int dificultad;
public:
    Videojuego() = default;
    Videojuego(int, string, string, int);
    void mostrarInfo();

    int getCodigo();
    void setCodigo(int codigo);

    string getNombre();
    void setNombre(string nombre);

    string getGenero();
    void setGenero(string genero);

    int getDificultad();
    void setDificultad(int dificultad);
};


#endif //JUEGO_VIDEOJUEGO_H