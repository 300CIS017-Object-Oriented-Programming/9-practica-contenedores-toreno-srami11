//
// Created by serag on 4/1/2025.
//

#ifndef JUEGO_TORNEO_H
#define JUEGO_TORNEO_H

#include "Videojuego.h"
#include "Jugador.h"
#include <map>

using namespace std;
class Torneo {
private:
    map<string, Videojuego*>videojuegos;
    map<string , Jugador*>jugadores;
    void inicializarDatos();
public:
    Torneo();
    ~Torneo();
    void registrarVideojuego(int codigo, string nombre, string genero, int dificultad);
    void registrarJugador(string nombreJugador, int nivel);
    void inscribirJugadorEnVideojuego();
    void mostrarVideojuegosDeJugador(string name);
    Videojuego* buscarVideojuego(string name);
    Jugador* buscarJugador(string name);

};


#endif //JUEGO_TORNEO_H