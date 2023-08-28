#include <iostream>
#include <list>
#include <sstream>
using namespace std;
struct Jugador{
  string nombre;
  int id;
  string pais;
  int cantpais=0;
  list<string> paises;
};
list<Jugador> jugadores;
list<string> americaNorte ={"Alaska", "Alberta", "America Central", "Estados Unidos Orientales", "Groenlandia", "Territorio Noroccidental", "Ontario", "Quebec", "Estados Unidos Occidentales"};
list<string> americaSur ={"Argentina", "Brasil", "Peru", "Venezuela"};
list<string> europa ={"Gran Bretaña", "Islandia", "Europa del Norte", "Escandinavia", "Europa del Sur", "Ucrania", "Europa Occidental"}; 
list<string> africa ={"Congo", "Africa Oriental", "Egipto", "Madagascar", "Africa del Norte", "África del Sur"};
list<string> asia ={"Afghanistan", "China", "India", "Irkutsk", "Japon", "Kamchatka", "Medio Oriente", "Mongolia", "Siam", "Siberia", "Ural", "Yakutsk"};
list<string> australia ={"Australia Oriental", "Indonesia", "Nueva Guinea", "Australia Occidental"};
list<string> vacios ={"Alaska", "Alberta", "America Central", "Estados Unidos Orientales", "Groenlandia", "Territorio Noroccidental", "Ontario", "Quebec", "Estados Unidos Occidentales", "Argentina", "Brasil", "Peru", "Venezuela", "Gran Bretaña", "Islandia", "Europa del Norte", "Escandinavia", "Europa del Sur", "Ucrania", "Europa Occidental", "Congo", "Africa Oriental", "Egipto", "Madagascar", "Africa del Norte", "África del Sur", "Afghanistan", "China", "India", "Irkutsk", "Japon", "Kamchatka", "Medio Oriente", "Mongolia", "Siam", "Siberia", "Ural", "Yakutsk", "Australia Oriental", "Indonesia", "Nueva Guinea", "Australia Occidental"};
list<string> ocupados;
#ifndef LIBRERIA_H
#define LIBRERIA_H
void menu_principal();
void menu_ayuda();
void menuAyudas();
bool inicializar();
void turno();
void guardar();
void guardarComprimido();
void inicializarGuardado();
void CostoConquista();
void ConnquistaMasBarata();
void salir();
#endif