#include "libreria.h"
using namespace std;

void menu_principal(){
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBIENVENIDO A:\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑🤑    💀💀💀💀💀💀💀💀💀💀     😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎  👻👻👻👻👻👻👻👻👻    👻👻👻👻👻👻👻\n";
  cout<<"🤑::::::::::::::::::::::::::::::::::::🤑  💀::::::::::::::::💀 😎😎::::::::::::::::::::::::::::::😎👻::::::::::::::👻    👻:::::::::::👻\n";
  cout<<"🤑:::::::::::::🤑🤑🤑🤑🤑🤑::::::::::::🤑 💀::::::::::::::::💀😎::::::::::😎😎😎😎😎😎::::::::::::😎👻:::::::::::::👻    👻:::::::::::👻\n";
  cout<<"🤑🤑:::::::::::🤑         🤑::::::::::::🤑💀💀::::::::::::💀💀😎::::::::::😎          😎😎😎😎😎😎😎👻:::::::::::::👻   👻::::::::::::👻\n";
  cout<<"  🤑:::::::::::🤑         🤑::::::::::::🤑    💀:::::::::💀   😎::::::::::😎                        👻👻:::::::::::👻  👻:::::::::👻👻👻\n";
  cout<<"  🤑:::::::::::🤑         🤑::::::::::::🤑    💀:::::::::💀    😎:::::::::😎                            👻:::::::::👻 👻:::::::::👻\n";   
  cout<<"  🤑:::::::::::🤑🤑🤑🤑🤑🤑::::::::::::🤑     💀:::::::::💀      😎:::::::😎😎😎😎                      👻::::::::::👻::::::::::👻\n";    
  cout<<"  🤑:::::::::::::::::::::::::::::::🤑🤑       💀:::::::::💀        😎😎:::::::::::😎😎😎😎😎            👻:::::::::::::::::::::👻\n";     
  cout<<"  🤑:::::::::::🤑🤑🤑🤑🤑🤑::::::::::🤑       💀:::::::::💀            😎😎😎:::::::::::::::😎😎        👻:::::::::::::::::::::👻\n";     
  cout<<"  🤑:::::::::::🤑         🤑:::::::::::🤑     💀:::::::::💀                  😎😎😎😎😎😎::::::😎       👻:::::::::::👻:::::::::👻\n";    
  cout<<"  🤑:::::::::::🤑         🤑:::::::::::🤑     💀:::::::::💀                             😎::::::😎      👻:::::::::👻 👻:::::::::👻\n";   
  cout<<"  🤑:::::::::::🤑         🤑:::::::::::🤑     💀:::::::::💀                             😎::::::😎  👻👻:::::::::::👻  👻:::::::::👻👻👻\n";
  cout<<"🤑🤑:::::::::::🤑         🤑:::::::::::🤑💀💀::::::::::::::💀💀😎😎😎😎😎😎😎           😎::::::😎 👻::::::::::::::👻   👻::::::::::::👻\n";
  cout<<"🤑:::::::::::::🤑         🤑:::::::::::🤑💀::::::::::::::::::💀😎::::::::::::😎😎😎😎😎😎:::::::😎👻:::::::::::::::👻    👻:::::::::::👻\n";
  cout<<"🤑:::::::::::::🤑         🤑:::::::::::🤑💀::::::::::::::::::💀😎::::::::::::::::::::::::::::😎😎 👻:::::::::::::::👻    👻:::::::::::👻\n";
  cout<<"🤑🤑🤑🤑🤑🤑🤑🤑          🤑🤑🤑🤑🤑🤑🤑 💀💀💀💀💀💀💀💀💀💀💀😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎   👻👻👻👻👻👻👻👻👻      👻👻👻👻👻👻👻\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\tDigite el comando 'ayuda' (sin comillas)\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\tpara obtener información de los comandos disponibles.\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
}
void menu_ayuda(){
  cout<<"\n\nLista de comandos disponibles: \n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| Comando\t\t\t\t\t\t\t\t\t\t| Descripcion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |\n"; 
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| inicializar\t\t\t\t\t\t\t\t\t| Realiza las operaciones necesarias para inicializar el juego\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| turno <id_jugador>\t\t\t\t\t\t\t| Realiza las operaciones descritas dentro del turno de un jugador. Por ejemplo, si se |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| desea acceder al turno del jugador 5, se debe digitar de esta manera: turno 5.\t   |  \n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| guardar <nombre_archivo>\t\t\t\t\t\t| Guarda el estado actual del juego en un archivo de texto. Por ejemplo, si se desea   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| guardar la partida bajo el nombre de 'juego', se debe digitar el comando de esta\t   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| manera: guardar juego.\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| guardar_comprimido <nombre_archivo>\t\t\t| Guarda el estado actual del juego en un archivo binario comprimido. Por ejemplo, si  |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| se desea guardar la partida bajo el nombre de 'juego', se debe digitar el comando de |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| esta manera: guardar_comprimido juego.\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| inicializar <nombre_archivo>\t\t\t\t\t| Inicializa el juego con los datos contenidos en el archivo identificado por\t\t   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| <nombre_archivo>. Por ejemplo, si se desea leer el archivo denominado 'juego' para   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| continuar con la partida guardada, se debe digitar: inicializar juego.\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| costo_conquista <territorio>\t\t\t\t\t| Calcula el costo y la secuencia de territorios a ser conquistados para lograr\t\t   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| controlar el territorio dado por el usuario. Por ejemplo, para el territorio\t\t   |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t| 'colombia': costo_conquista colombia.\t\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| conquista_mas_barata\t\t\t\t\t\t\t| Calcula el territorio que implique un menor número de unidades de ejército perdidas. |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| ayuda\t\t\t\t\t\t\t\t\t\t\t| Muestra la lista de comandos disponibles.\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
  cout<<"| salir\t\t\t\t\t\t\t\t\t\t\t| Sale del juego Risk.\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"+--------------------------------------------------------------------------------------------------------------------------------------+\n";
}
void inicializar(){
  cout<<"Aqui va la funcion inicializar"<<endl;
  cout<<endl;
  return;
}
void turno(){
  cout<<"Aqui va la funcion turno"<<endl;
  cout<<endl;
  return;
}
void guardar(){
  cout<<"Aqui va la funcion guardar"<<endl;
  cout<<endl;
  return;
}
void guardarComprimido(){
  cout<<"Aqui va la funcion guardarComprimido"<<endl;
  cout<<endl;
  return;
}
void inicializarGuardado(){
  cout<<"Aqui va la funcion inicializarGuardado"<<endl;
  cout<<endl;
  return;
}
void CostoConquista(){
  cout<<"Aqui va la funcion CostoConquista"<<endl;
  cout<<endl;
  return;
}
void ConnquistaMasBarata(){
  cout<<"Aqui va la funcion ConnquistaMasBarata"<<endl;
  cout<<endl;
  return;
}