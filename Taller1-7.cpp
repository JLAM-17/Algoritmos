#include <iostream>
#include <list>
using namespace std;

int main() {
  list<float> lreales;
  lreales.push_back(2);
  lreales.push_back(5.23);
  lreales.push_back(4.21);
  lreales.push_back(8.321);
  lreales.push_back(6.43);
  float a = 0;
  while (!lreales.empty()) {
    a += lreales.front();
    lreales.pop_front();
  }
  std::cout << a << '\n';
  return 0;
}
