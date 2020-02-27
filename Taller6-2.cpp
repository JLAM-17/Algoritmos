#include <iostream>
using namespace std;

string inv(string a){
  if (a.size() == 1){
    return a;
  }
  else{
    char letra = a.front();
    a.erase(a.begin());
    return inv(a) + letra;
  }
}

int main() {
  string a = "Hola";
  std::cout << inv(a) << '\n';
  return 0;
}
