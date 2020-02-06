#include <iostream>
#include <map>
using namespace std;

int main() {
  std::map<string, string> m;
  m ["alegoría"] = "Ficción en virtud de la cual un relato o una imagen representan o significan otra cosa diferente.";
  m ["telequinesia"] = "Desplazamiento de objetos sin causa física, producido por una fuerza psíquica o mental.";
  m["ataraxia"] = "Imperturbabilidad, serenidad.";
  m ["arrebol"] = "Color rojo, especialmente el de las nubes iluminadas por los rayos del sol o el del rostro.";

  std::cout << "Definición de alegoría: " << m["alegoría"] << '\n';
  std::cout << "Definición de telequinesia: " << m["telequinesia"] << '\n';

  m.erase("arrebol");
  map <string,string> :: iterator it = m.begin();

  while (it != m.end()){
    std::cout << it->first << ": " << it ->second << '\n';
    it ++;
  }
  for (it = m.begin(); it != m.end(); it ++)
  std::cout << it->first << ": " << it ->second << '\n';
  return 0;

}
