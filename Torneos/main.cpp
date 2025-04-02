#include <iostream>
#include "src/Torneo.h"
#include <string>

using namespace std;

void menu(Torneo &torneo) {
    int opc;
    do {
        cout << "\n=== Menu ===\n";
        cout << "1. Registrar videojuego\n"
                "2. Registrar jugadores\n"
                "3. Mostrar videojuegos del jugador\n"
                "4. Inscribir jugador al videojuego\n"
                "5. Salir\n";
        cout << "Opcion: ";
        cin >> opc;
        cin.ignore();
        switch (opc) {
            case 1: {
                cout << "\n=== Registrar videojuegos ===\n";
                string nombreJuego, tipo;
                int code, difficulty;
                cout << "Ingrese el nombre del videojuego: ";
                getline(cin, nombreJuego);
                cout << "Ingrese el codigo: ";
                cin >> code;
                cout << "Ingrese el genero del juego: ";
                getline(cin, tipo);
                cout << "Ingrese la dificulta (1-5): ";
                cin >> difficulty;
                torneo.registrarVideojuego(code, nombreJuego, tipo, difficulty);
                break;
            }
            case 2: {

                cout << "\n=== Registrar Jugadores ===\n";
                string name;
                int level;
                cout << "Escribe el nickname: ";
                getline(cin, name);
                cout << "Escribe el nivel: ";
                cin >> level;
                cin.ignore();
                torneo.registrarJugador(name, level);
                break;
            }
            case 3: {
                cout << "\n=== Mostrar videojuegos de jugadores ===\n";
                string jugador;
                cout << "Ingrese el nickname del jugador: ";
                getline(cin, jugador);
                torneo.mostrarVideojuegosDeJugador(jugador);
                break;
            }
            case 4: {
                torneo.inscribirJugadorEnVideojuego();
                break;
            }
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción invalida. Intente de nuevo.\n";
        }
    } while (opc != 5);
}

int main() {
    Torneo torneo;
    menu(torneo);
    return 0;
}