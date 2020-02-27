#include <iostream>
using namespace std;

int potencia(int n, int k){
  if (k==1)
    return n;
  else
  return n * potencia(n,k-1);
}

int main() {
  int a = 2;
  int b = 3;
  std::cout << potencia(b,a) << '\n';
  return 0;
}
