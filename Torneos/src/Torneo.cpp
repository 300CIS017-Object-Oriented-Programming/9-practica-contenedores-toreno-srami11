//
// Created by serag on 4/1/2025.
//

using namespace std;
#include <iostream>
#include "Torneo.h"
#include <string>
Torneo::Torneo() {
    inicializarDatos();
}

Torneo::~Torneo(){
    for(auto& pair : videojuegos){
        delete pair.second;
    }
    videojuegos.clear();

    for(auto& pair: jugadores){
        delete pair.second;
    }
    jugadores.clear();

}
void Torneo::inicializarDatos() {

    Jugador *j1 = new Jugador();
    Jugador *j2 = new Jugador();
    Jugador *j3 = new Jugador();

    Videojuego *v1 = new Videojuego();
    Videojuego *v2 = new Videojuego();
    Videojuego *v3 = new Videojuego();

    j1->setNombreJugador("santop");
    j1->setNivel(21);
    j2->setNombreJugador("josep2133");
    j2->setNivel(34);
    j3->setNombreJugador("dusckas25");
    j3->setNivel(11);

    v1->setCodigo(101);
    v1->setNombre("The Legend of Zelda");
    v1->setGenero("Aventura");
    v1->setDificultad(4);

    v2->setCodigo(102);
    v2->setNombre("Call of Duty");
    v2->setGenero("Shooter");
    v2->setDificultad(5);

    v3->setCodigo(103);
    v3->setNombre("Minecraft");
    v3->setGenero("Sandbox");
    v3->setDificultad(2);

    j1->mostrarJugador();

 }

void Torneo::registrarVideojuego(int codigo, string nombre, string genero, int dificultad){
    Videojuego* videojuego = buscarVideojuego(nombre);
    if(videojuego){
        cout << "Ya se encuentra el videoJuego\n";
        return;
    }
    videojuegos[nombre] = new Videojuego(codigo, nombre, genero, dificultad);

}
void Torneo::mostrarVideojuegosDeJugador(string name) {
    auto it = jugadores.find(name);
    if (it == jugadores.end()) {
        cout << "Jugador no encontrado\n";
        return;
    }
    it->second->mostrarJugador();
    if(jugadores.empty()){
        cout << "  (No tiene videojuegos registrados)\n";
        return;
    }
    else{
        for( auto& pair : videojuegos){
            pair.second->mostrarInfo();
        }
    }
}
void Torneo::inscribirJugadorEnVideojuego() {
    string nombreJugador, nombreVideojuego;
    cout << "Ingrese el nombre del jugador: ";
    cin >> nombreJugador;
    cout << "Ingrese el código del videojuego: ";
    cin >> nombreVideojuego;

    Jugador* jugador = buscarJugador(nombreJugador);
    Videojuego* videojuego = buscarVideojuego(nombreVideojuego);
    if(!videojuego) {
        cout << "(Videojuego no encontrado)\n";
        return;
    }
    if(!jugador){
        cout<<"(Jugador no encontrado)\n";
    }
    jugador->agregrarVideoJuego(videojuego);

}
void Torneo::registrarJugador(string nombreJugador, int nivel) {
    Jugador* jugador = buscarJugador(nombreJugador);
    if(jugador){
        cout << "Ya se encuentra el jugador registrado\n";
        return;
    }
    jugadores[nombreJugador] = new Jugador(nombreJugador, nivel);
}

Videojuego* Torneo:: buscarVideojuego(string name){
    for(auto& pair : videojuegos){
        if(pair.second->getNombre() == name){
            return pair.second;
        }
    }
    return nullptr;
}
Jugador* Torneo::buscarJugador(string name) {
    for(auto& pair : jugadores){
        if(pair.second->getNombreJugador() == name){
            return pair.second;
        }
    }
    return nullptr;
}
