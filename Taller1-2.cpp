#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

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
  return 0;
}
