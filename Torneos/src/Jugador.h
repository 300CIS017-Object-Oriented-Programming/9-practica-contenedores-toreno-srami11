//
// Created by serag on 4/1/2025.
//

#ifndef JUEGO_JUGADOR_H
#define JUEGO_JUGADOR_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;
class Videojuego;
class Jugador {
private:
    string nickName;
    int nivel;
    vector<Videojuego* > videoJuegosIncritos;
public:
    Jugador() = default;
    Jugador(string, int);
    void mostrarJugador();
    void agregrarVideoJuego(Videojuego* videojuego);
    string getNombreJugador();
    void setNombreJugador(string);
    int getNivel();
    void setNivel(int nivel);

};


#endif //JUEGO_JUGADOR_H
