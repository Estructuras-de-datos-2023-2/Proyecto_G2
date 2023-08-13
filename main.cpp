#include <iostream>
#include "funciones.cpp"
using namespace std;

int main() {
  string respuesta=" ";
  menu_principal();
  while (respuesta!="salir"){
    cout<<"$";
    cin>>respuesta;
    if (respuesta=="ayuda"){
      menu_ayuda();
    }
    else if(respuesta == "inicializar"){
      inicializar();
    }
    else if(respuesta == "turno <id_jugador>"){
      turno();
    }
    else if(respuesta == "guardar <nombre_archivo>"){
      guardar();
    }
    else if(respuesta == "guardar_comprimido <nombre_archivo>"){
      guardarComprimido();
    }
    else if(respuesta == "inicializar <nombre_archivo>"){
      inicializarGuardado();
    }
    else if(respuesta == "costo_conquista <territorio>"){
      CostoConquista();
    }
    else if(respuesta == "conquista_mas_barata"){
      ConnquistaMasBarata();
    }
    else if (respuesta=="salir"){
      break;
    }
    else{
      cout<<"respuesta no valida\n";
    }
  }
  cout<<"\nGracias por usar nuestro programa\n";
}