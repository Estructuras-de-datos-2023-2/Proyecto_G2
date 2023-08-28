#include <iostream>
#include "funciones.cpp"
using namespace std;

int main() {
  int param=0;
  string respuesta=" ";
  bool inicio=true;
  menu_principal();
  list<Jugador>::iterator it;
  while (respuesta!="salir"){
    cout<<"$";
    cin>>respuesta;
    stringstream input_stringstream(respuesta);
    string comando;
    string parametro;
    char delimitador =' ';
    getline(input_stringstream, comando, delimitador);
    getline(input_stringstream, parametro, delimitador);
    //istringstream(parametro)>>param;
    if (respuesta=="ayuda"){
      menu_ayuda();
    }
    else if(respuesta == "inicializar"){
      if(inicio==true){
         inicializar();
      }
      else
        cout<<"El juego ya ha sido inicializado.\n";
    }
    else if((comando == "turno")) //&& (param==it->id))
      turno();
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
    it++;
  }
  cout<<"\nGracias por usar nuestro programa\n";
}