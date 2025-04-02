//
// Created by serag on 4/1/2025.
//

#include "Jugador.h"
Jugador :: Jugador(string nickName, int nivel){
    this->nickName = nickName;
    this->nivel = nivel;
}
void Jugador::agregrarVideoJuego(Videojuego* videojuego) {
    videoJuegosIncritos.push_back(videojuego);
}
void Jugador::mostrarJugador(){
    cout << "Informacion del Jugador\n";
    cout << "NickName: " << getNombreJugador();
    cout << "Nivel del Jugador: " << getNivel();
    cout << endl;
}
string Jugador::getNombreJugador(){
    return nickName;
}
void Jugador::setNombreJugador(string nickName){
    this->nickName = nickName;
}

int Jugador::getNivel(){
    return nivel;
}

void Jugador::setNivel(int nivel){
    this->nivel = nivel;
}