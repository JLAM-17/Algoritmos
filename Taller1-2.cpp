#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void imprimirVector(std::vector<int> &v){
  for (unsigned int i = 0; i < v.size();i++){
    std::cout << v[i] << '\n';
  }
}

int main() {
  vector<int> vint;
  for (size_t i = 1; i < 11; i++){
    vint.push_back(pow(3,i));
  }
  for (size_t i = 0; i < vint.size(); i++) {
    if (vint[0] < 100){
      vint.erase(vint.begin());
    }
  }
 for (size_t i = 0; i < vint.size(); i++) {
    std::cout << vint[i] << '\n';
  }
  imprimirVector(vint);
  return 0;
}
