#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main() {
  list<int> lint;
  for (int i=1; i<11; i++){
    lint.push_back(pow(3,i));
  }
  unsigned int a = lint.size();
  for (unsigned int i=0; i < a; i++){
    std::cout << lint.front() << '\n';
    lint.pop_front();
  }
  return 0;
}
