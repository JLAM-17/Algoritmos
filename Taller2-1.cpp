#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int,string> m;
  m.insert(pair<int,string>(1,"first"));
  m[2] = "Hola";
  m[1] = "Eliminado";
  m[3] = "Tercero";
  map<int,string> :: iterator it = m.begin();
  while (it != m.end()){
    std::cout << it->first << it->second << '\n';
    it ++;
  }
  m.erase(2);
  it = m.begin();
  while (it != m.end()){
    std::cout << (*it).first << (*it).second << '\n';
    it ++;
  }
  std::cout << "Accediendo al valor de una llave: "  << m[1] << '\n';
  std::cout << "Número de elementos: " << m.size() << '\n';
  return 0;
}
