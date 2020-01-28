#include <iostream>
#include <vector>
using namespace std;

int distancia_enrutador(vector<string> enrutadores, vector<int> distancia,int indice){
  std::cout << "La distancia a " << enrutadores[indice] << " es: " << distancia[indice]<< '\n';
  return 0;
}

int main() {
  vector<string> venrutadores;
  vector<int> vdistancias;
  venrutadores.push_back("enrutador1");
  venrutadores.push_back("enrutador2");
  venrutadores.push_back("enrutador3");
  venrutadores.push_back("enrutador4");
  venrutadores.push_back("enrutador5");
  vdistancias.push_back(1000);
  vdistancias.push_back(2000);
  vdistancias.push_back(3000);
  vdistancias.push_back(4000);
  vdistancias.push_back(5000);
  vdistancias.push_back(6000);
  int a;
  std::cout << "Inserte el índice del enrutador cuya distancia desee calcular: " << '\n';
  std::cin >> a;
  distancia_enrutador(venrutadores,vdistancias,a);
  return 0;
}
