#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  std::vector<char> vchar;
  for(char a = 'a'; a <= 122; a++){
    vchar.push_back(a);
  }
  for (unsigned int i = 0; i < vchar.size(); i++){
    std::cout << vchar[i] << '\n';
  }
  for ( int i = vchar.size() -1 ; i >= 0; i--){
    std::cout << vchar[i] << '\n';
  }
  std::vector<string> vst;
  string  a;
  while (a != "1"){
    std::cout << "Escriba la fruta que desee añadir, si ya terminó presione 1." << '\n';
    std::cin >> a;
    if (a != "1"){
      vst.push_back(a);
    }
  }
  for (unsigned int i = 0; i < vst.size(); i++){
    std::cout << vst[i] << '\n';
  }
  
  return 0;
}
